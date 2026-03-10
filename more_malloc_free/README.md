## Advanced Dynamic Memory Allocation in C – More `malloc` & `free`

🧠 **Project: More Malloc, Free**
This project is part of the `holbertonschool-low_level_programming` repository and builds on the concepts introduced in **dynamic memory allocation in C**.

It explores more advanced memory management techniques and introduces new behaviors when handling memory allocation failures.

The project focuses on understanding:

* `malloc` and `free`
* Handling allocation failures
* Using the `exit` function
* Understanding how `calloc` and `realloc` work conceptually
* Writing safer dynamic memory management code

The goal is to strengthen your understanding of **how memory is allocated and controlled during program execution**.

---

🧠 **How It Works**

* Memory is dynamically allocated using `malloc`.
* Programs must always check if memory allocation **fails**.
* When allocation fails, the program may terminate safely using `exit`.
* Proper memory management prevents **segmentation faults** and **memory leaks**.
* Even though `calloc` and `realloc` exist in the C standard library, this project focuses on **re-implementing similar behaviors using only `malloc` and `free`**.

---

🧠 **Example Concept**

```c
char *buffer;

buffer = malloc(sizeof(char) * 20);
if (buffer == NULL)
{
    exit(98); /* stop program if allocation fails */
}

/* memory can now be used safely */

free(buffer); /* release allocated memory */
```

Proper memory handling ensures that programs remain **stable, efficient, and safe** when working with dynamic data.
