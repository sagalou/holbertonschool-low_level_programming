## Pointers, Arrays & Strings - Pointers to pointers - Two dimensional arrays, Multi-dimensional arrays

🧠 Project 1: Pointers, Arrays and Strings
This project is part of the holbertonschool-low_level_programming repository and focuses on understanding pointers in C.
This project introduces the fundamental concepts of:

Pointers

Arrays

Strings

Memory layout

Variable scope

It focuses on understanding how memory works and how data is stored and accessed using pointers and array


🧠 How It Works

Functions manipulate data using pointers instead of returning large values.

Strings are handled as arrays of characters ending with '\0'.

Memory addresses are accessed using & (address-of operator).

Values are accessed using * (dereferencing operator).

Example concept:

int x = 10;
int *p = &x;  /* p stores the address of x */

🎯 Learning Objectives

By the end of this project, I can explain:

What pointers are and how to use them

What arrays are and how to use them

The difference between pointers and arrays

How strings are stored and manipulated in C

How variable scope works


📌 Project 2: More Pointers, Arrays and Strings
📖 Description

This project deepens pointer manipulation skills and introduces more advanced string and array operations.

It reinforces:

Pointer arithmetic

Array traversal

Manual string manipulation

Recreating standard library behavior


🎯 Learning Objectives

After completing this project, I better understand:

Pointer arithmetic

Passing arrays to functions

Advanced string operations

Writing custom implementations of common string functions


⚙️ How It Works

Instead of using standard library functions like:

printf

puts

strlen

strcpy

We recreate similar behavior manually using:

Loops

Pointers

Character-by-character manipulation

_putchar for output

This strengthens understanding of what happens behind the scenes.


📌 Project 3: Even More Pointers, Arrays and Strings
📖 Description

This project introduces more advanced memory concepts including:

Pointers to pointers

Multidimensional arrays

Deeper string manipulation


🎯 Learning Objectives

By the end of this project, I can explain:

What a pointer to a pointer is (int **ptr)

How 2D arrays are stored in memory

How multidimensional arrays are accessed

Common string manipulation patterns


⚙️ How It Works
Pointer to Pointer Example
int x = 5;
int *p = &x;
int **pp = &p;

p stores the address of x

pp stores the address of p

2D Array Example
int arr[2][3];

This is stored in contiguous memory, row by row.


🛠 Compilation & Requirements

All projects follow strict rules:

Compiled on Ubuntu 20.04 LTS

Compiler: gcc

Flags:

-Wall -Werror -Wextra -pedantic -std=gnu89

No global variables

No more than 5 functions per file

No use of the standard C library (no printf, puts, etc.)

Only _putchar is allowed

Betty coding style required

All prototypes must be in main.h

All files must end with a new line


🧩 Key Concepts Covered Across All Projects

Memory addressing

Stack memory basics

Dereferencing

Pointer arithmetic

Array indexing vs pointer notation

String termination ('\0')

Passing by reference

2D array traversal

Pointer-to-pointer relationships


🚀 What These Projects Really Teach

These projects are not just about syntax. They teach:

How memory works internally

How C handles data

Why abstraction in higher-level languages exists

How to write safer, more predictable code

How to think like a systems programmer

They build the foundation needed for:

Data structures

Dynamic memory allocation (later projects)

Linked lists

Trees

Advanced memory management


👨‍💻 Author

**sagalou**
Part of the Holberton School Low-Level Programming curriculum.
