# Crash Report — crash_example.c

## 1. Crash Description
Program: crash_example
Signal: SIGSEGV (signal 11)
Location: main (crash_example.c:32)
Observed: "Segmentation fault (core dumped)"

## 2. Root Cause Analysis

### Causal chain
1. `n` is declared and initialized to 0 in main.
2. `allocate_numbers(0)` is called.
3. Inside `allocate_numbers`, the condition `n <= 0` is true.
4. The function returns NULL without calling malloc.
5. `nums = NULL` (address 0x0).
6. `nums[0] = 42` attempts to write 4 bytes at address 0x0.
7. Address 0x0 is not mapped to the process address space.
8. The OS detects the invalid access and sends SIGSEGV.
9. The process is killed immediately.

### Memory category
This crash involves neither valid stack memory nor heap memory.
`nums` is a stack variable (pointer), but it holds NULL (0x0).
No heap allocation was ever made — malloc was never reached.
The invalid access is a NULL pointer dereference.

## 3. Why the Memory Access is Invalid
Address 0x0 (NULL) is never mapped to any user process.
It is deliberately left unmapped by the OS as a protection
mechanism — any access to it is immediately fatal.

`nums[0] = 42` is equivalent to `*(nums + 0) = 42` = `*(0x0) = 42`.
Writing to address 0x0 is always an immediate fatal error.

## 4. Valgrind Confirmation
Valgrind confirms the crash:
  Invalid write of size 4
  at main (crash_example.c:32)
  Address 0x0 is not stack'd, malloc'd or (recently) free'd
  Process terminating with signal 11 (SIGSEGV)

## 5. AI Critical Review

### AI suggestion
The AI suggested the crash was caused by "n and nums being
declared as similar variables."

### Why this is wrong
The crash has nothing to do with variable declaration types.
Both `n` (int) and `nums` (int pointer) are correctly declared.
The bug is a missing return value check after `allocate_numbers`.
The AI confused the symptom with the cause.

### Correct explanation
The root cause is the absence of a NULL check after the call
to `allocate_numbers`. The function correctly returns NULL for
invalid input, but the caller never verifies this before use.

## 6. Suggested Fix (optional)
  nums = allocate_numbers(n);
  if (!nums)        ← add this check
  {
      printf("allocation failed or n=0\n");
      return 1;
  }
  nums[0] = 42;     ← now safe

This crash is deterministic. It will always occur when n=0
because the code path to NULL dereference is guaranteed.