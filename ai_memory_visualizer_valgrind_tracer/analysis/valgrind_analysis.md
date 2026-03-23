# Valgrind Analysis — AI Memory Visualizer & Valgrind Tracer

## 1. heap_example.c

### Valgrind command
```
valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./heap_example
```

### Reported issues
```
6 bytes in 1 blocks are definitely lost
   at malloc (heap_example.c:21)
   by person_new (heap_example.c:21)
   by main (heap_example.c:51)

total heap usage: 5 allocs, 4 frees
```

### Classification
- Type: **Memory leak — definitely lost**
- Object involved: `alice->name` (the string "Alice\0", 6 bytes)

### Explanation
`person_new` performs TWO malloc calls per Person:
1. One for the Person struct
2. One for the name string

`bob` is correctly freed:
  free(bob->name);  ✓
  free(bob);        ✓

`alice` is freed via `person_free_partial` which only calls:
  free(alice);      ✓ frees the struct
  alice->name       ✗ never freed → LEAK

After `free(alice)`, the pointer to "Alice\0" is destroyed
along with the struct. No pointer to that block exists anymore.
Valgrind classifies it as **definitely lost** — unreachable memory
that can never be freed.

### Lifetime violation
The name block was allocated inside `person_new` and its ownership
was never transferred or documented. `person_free_partial` ignored
the nested allocation, causing a permanent leak.

---

## 2. aliasing_example.c

### Valgrind command
```
valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./aliasing_example
```

### Reported issues
```
1. Invalid read of size 4   → line 42 → b[2]  (read after free)
2. Invalid write of size 4  → line 44 → b[3]  (write after free)
3. Invalid read of size 4   → line 45 → b[3]  (read after write)

All heap blocks were freed — no leaks are possible
```

### Classification
- Type: **Use-after-free** (3 occurrences)
- Object involved: heap block allocated in `make_numbers` (20 bytes, 5 ints)

### Explanation
`b = a` creates an alias — both pointers hold the same address.
After `free(a)`, the heap block is released. `b` still holds
the old address but the memory is no longer valid.

Any access through `b` after `free(a)` is use-after-free:
- `b[2]` read  → invalid read  (line 42)
- `b[3] = 1234` → invalid write (line 44)
- `b[3]` read  → invalid read  (line 45)

### Important observation
Without Valgrind: `b[2]` returned `-876772388` (corrupted value).
With Valgrind: `b[2]` returned `22` (original value).

Valgrind intercepts malloc/free and protects freed blocks from
being reused. This preserves the original values, making the
use-after-free visible without corruption.

### Lifetime violation
The heap block's lifetime ended at `free(a)` on line 38.
All accesses through `b` after line 38 violate the object lifetime.
There is only ONE heap block — `b = a` is not a new allocation.

---

## 3. crash_example.c

### Valgrind command
```
valgrind --leak-check=full --track-origins=yes ./crash_example
```

### Reported issues
```
Invalid write of size 4
   at main (crash_example.c:32)
   Address 0x0 is not stack'd, malloc'd or (recently) free'd

Process terminating with signal 11 (SIGSEGV)

still reachable: 1,024 bytes in 1 blocks
```

### Classification
- Type: **NULL dereference** (invalid write to address 0x0)
- Object involved: `nums` pointer (NULL, never allocated)

### Explanation
`n = 0` in main. `allocate_numbers(0)` hits condition `n <= 0`
and returns NULL. `nums = NULL = 0x0`.

`nums[0] = 42` attempts to write at address 0x0.
Address 0x0 is never mapped to any process — the OS sends
SIGSEGV and the process is killed immediately.

### The 1,024 bytes — still reachable
This block was NOT allocated by our code.
It comes from the C standard library (`printf` allocates an
internal buffer on first use). The program crashed before
`stdio` could release this buffer.
Valgrind reports it as `still reachable` (not `definitely lost`)
because a pointer to the block still exists internally.
This is NOT a bug in our code.

### Lifetime violation
`nums` was never assigned a valid heap address.
Writing through a NULL pointer is always an immediate fatal error.
The crash is deterministic — it will always occur when n=0.

---

## 4. AI Critical Review

### AI mistake documented

When first analyzing `crash_example.c`, the AI explained the
`still reachable: 1,024 bytes` as coming from "the heap output"
without identifying the real source.

### Why it was wrong
The 1,024 bytes do not come from user code or heap management
output. They come from the **stdio internal buffer** allocated
by `printf` on its first call. This is a well-known behavior
of the C standard library.

### The correct explanation
`printf` allocates a 1,024 byte buffer internally on first use.
When the program crashes via SIGSEGV, this buffer is never freed.
Valgrind sees a pointer to it still exists → `still reachable`.
This is not a bug. It is expected behavior from the C library.

### Why this matters
Misidentifying `still reachable` blocks as bugs leads to
unnecessary investigation. Understanding the source of each
Valgrind report is essential to avoid false positives.