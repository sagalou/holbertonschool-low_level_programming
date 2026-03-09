## Dynamic Memory Allocation in C - Malloc & Free

🧠 **Project: Malloc, Free**  
This project is part of the `holbertonschool-low_level_programming` repository and focuses on understanding **dynamic memory allocation in C**.  
It introduces the fundamental concepts of:

- `malloc` and `free`
- Dynamic memory vs automatic (stack) memory
- Memory leaks and how to detect them
- Basic memory management in C

It focuses on **how memory is allocated at runtime** and how to safely manage it using pointers.

---

🧠 **How It Works**

- Memory is allocated dynamically at runtime using `malloc`.
- The allocated memory can be initialized with a value or left uninitialized.
- Once the memory is no longer needed, it must be freed using `free` to prevent **memory leaks**.
- `valgrind` can be used to check for proper memory management.

**Example concept:**

```c
int *ptr;
ptr = malloc(sizeof(int) * 5); /* allocates space for 5 integers */
if (ptr == NULL)
    return (1); /* allocation failed */

free(ptr); /* release allocated memory */