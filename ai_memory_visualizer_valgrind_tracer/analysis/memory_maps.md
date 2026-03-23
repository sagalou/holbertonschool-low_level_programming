# Memory Maps — AI Memory Visualizer & Valgrind Tracer

## 1. stack_example.c

### Program behavior
`walk_stack` is called recursively from depth=0 to depth=3.
Each call creates a new stack frame with its own local variables.

### Memory layout (stack)

The stack grows downward. Each recursive call adds a new frame
at a lower address than the previous one.

CALL SEQUENCE: main → walk_stack(0) → walk_stack(1) → walk_stack(2) → walk_stack(3)

Stack at maximum depth (depth=3):

Higher addresses
+---------------------------+ 0x7ffd305480f4
| walk_stack(0)             |
|   marker = 0              |
|   local_int = 100         |
|   local_buf = "A"         |
+---------------------------+ 0x7ffd305480c4
| walk_stack(1)             |
|   marker = 10             |
|   local_int = 101         |
|   local_buf = "B"         |
+---------------------------+ 0x7ffd30548094
| walk_stack(2)             |
|   marker = 20             |
|   local_int = 102         |
|   local_buf = "C"         |
+---------------------------+ 0x7ffd30548064
| walk_stack(3)             |
|   marker = 30             |
|   local_int = 103         |
|   local_buf = "D"         |
+---------------------------+ 0x7ffd30548014
Lower addresses

### Variable lifetimes
- Each frame's variables exist ONLY during that function call.
- When walk_stack(3) returns, its frame is destroyed.
- walk_stack(2) resumes with its variables intact (same address, untouched).

### Key observation
The stack grows downward:
  depth=0 : &local_int = 0x7ffd305480a4
  depth=1 : &local_int = 0x7ffd30548074  (-0x30)
  depth=2 : &local_int = 0x7ffd30548044  (-0x30)
  depth=3 : &local_int = 0x7ffd30548014  (-0x30)
Each new frame is exactly 0x30 (48) bytes lower than the previous one.

## 2. aliasing_example.c

### Program behavior
`make_numbers` allocates an array of 5 integers on the heap.
`a` and `b` are two pointers pointing to the SAME memory block.
After `free(a)`, `b` becomes a dangling pointer.

### Memory layout

BEFORE free(a):

STACK                        HEAP
+----------+                +----+----+----+----+----+
| a = 0x5c436bf146b0 |----->|  0 | 11 | 22 | 33 | 44 |
| b = 0x5c436bf146b0 |---/  +----+----+----+----+----+
+----------+            [0]  [1]  [2]  [3]  [4]

Both a and b point to the same heap block.

AFTER free(a):

STACK                        HEAP
+----------+                +----+----+----------+----+----+
| a = 0x5c436bf146b0 |--->  | ?? | ?? | -876772388| ?? | ?? |
| b = 0x5c436bf146b0 |--->  +----+----+----------+----+----+
+----------+                 memory now owned by system

b is now a DANGLING POINTER.
The heap block contains garbage written by the memory manager.

### Variable lifetimes
- The heap block is allocated in `make_numbers` and owned by `a`.
- `b = a` creates an alias — NOT a new allocation.
- After `free(a)`, the heap block is released.
- `b` still holds the old address but the memory is no longer valid.

### Observed behavior
  Before free: b[2] = 22      (correct value: 2 * 11)
  After free:  b[2] = -876772388  (garbage from memory manager)
  b[3] = 1234 written into freed memory (undefined behavior)

### Key concept: pointer aliasing
When two pointers hold the same address, freeing through one
invalidates the other. There is only ONE heap block — not two.
Freeing it once releases it for both pointers.

## 3. heap_example.c

### Program behavior
`person_new` performs TWO malloc calls for each Person:
  1. One for the Person struct itself
  2. One for the name string

`bob` is correctly freed (both mallocs freed).
`alice` is partially freed — the struct is freed but `name` is leaked.

### Memory layout

HEAP after both allocations:

+------------------+ 0x55cd149d36b0      +----------+ 0x55cd149d36d0
| Person (alice)   |                     | "Alice\0" |
|   name = 0x55cd149d36d0 |------------>|           |
|   age  = 30      |                     +----------+
+------------------+

+------------------+ 0x55cd149d36f0      +----------+ 0x55cd149d3710
| Person (bob)     |                     | "Bob\0"   |
|   name = 0x55cd149d3710 |------------>|           |
|   age  = 41      |                     +----------+
+------------------+

### Freeing sequence

bob (correct):
  free(bob->name);  ✓ frees "Bob\0" string
  free(bob);        ✓ frees Person struct
  → no leak

alice (incorrect — person_free_partial):
  free(alice);      ✓ frees Person struct
  alice->name       ✗ NEVER freed → MEMORY LEAK

### Variable lifetimes
- Each Person requires TWO allocations with TWO independent lifetimes.
- Freeing the struct does NOT free the name — they are separate heap blocks.
- The caller is responsible for freeing ALL allocations.

### Key concept: ownership
Each malloc must have exactly one matching free.
person_free_partial only frees the struct, ignoring the name pointer.
The name block becomes unreachable after free(alice) — it is leaked forever.

On ajoute la dernière section :
bashcat >> ~/holbertonschool-low_level_programming/ai_memory_visualizer_valgrind_tracer/analysis/memory_maps.md << 'EOF'

## 4. crash_example.c

### Program behavior
`allocate_numbers` returns NULL when n <= 0.
In main, n = 0, so nums = NULL.
Writing to nums[0] dereferences NULL → segmentation fault.

### Causal chain
  n = 0
  → allocate_numbers(0) hits condition (n <= 0) → returns NULL
  → nums = NULL (address 0x0)
  → nums[0] = 42 → *(0x0) = 42
  → address 0x0 is not mapped to the process
  → OS sends SIGSEGV → Segmentation fault (core dumped)

### Memory layout

STACK
+----------+
| n   = 0  |
| nums = NULL (0x0) |
+----------+

HEAP: nothing allocated (malloc never reached)

nums[0] = 42 attempts to write at address 0x0 → INVALID

### The fix
Always check the return value of allocate_numbers before use:

  nums = allocate_numbers(n);
  if (!nums)      ← check here
      return 1;
  nums[0] = 42;   ← safe only if nums != NULL

### Key concept: NULL dereference
NULL (0x0) is never a valid memory address for user programs.
Any read or write through a NULL pointer causes an immediate
segmentation fault — the OS kills the process.
This crash is deterministic: it will ALWAYS happen with n=0.

## 5. AI Critical Review

### AI mistake documented

When analyzing `aliasing_example.c`, the AI said:
> "It will probably crash or display strange values"

This was **incorrect and misleading**.

### Why it was wrong
The program did NOT crash. It ran to completion and printed:
  after free(a): b=0x5c436bf146b0 (dangling)
  reading b[2]=-876772388
  wrote b[3]=1234

The AI assumed that use-after-free always causes a crash.
This is a common misconception.

### The correct explanation
Use-after-free is **undefined behavior** in C.
It does NOT always crash. Possible outcomes include:
- The program crashes (segfault) — sometimes
- The program continues with corrupted values — often
- The program appears to work normally — possible

In this case, the memory manager had written its own internal
data into the freed block. Reading b[2] returned -876772388
instead of 22 — corrupted but no crash.

### Why this is dangerous
Silent corruption is WORSE than a crash.
A crash is immediately visible. Silent corruption can propagate
through the program undetected, causing bugs far from the source.

### Correction
The AI should have said:
"Use-after-free is undefined behavior. The program may crash,
may produce corrupted output, or may appear to work. Never
rely on any specific outcome."
