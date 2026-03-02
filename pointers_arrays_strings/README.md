## Pointers, Arrays & Strings – 0. 98 Battery 🔋

This project is part of the holbertonschool-low_level_programming repository and focuses on understanding pointers in C.

📌 Task Description

Write a function that takes a pointer to an integer as a parameter and updates the value it points to to 98.

Prototype
void reset_to_98(int *n);

The function must:

Receive a pointer to an int

Modify the value stored at that memory address

Set it to 98

📂 Project Structure
holbertonschool-low_level_programming/
└── pointers_arrays_strings/
    ├── 0-reset_to_98.c
    ├── main.h
    └── 0-main.c (for testing)
🛠 Compilation

To compile the program:

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
▶️ Example
Test File (0-main.c)
#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
Output
n=402
n=98

🧠 How It Works

The function receives a pointer (int *n).

A pointer stores the memory address of a variable.

Using the dereference operator *, we access and modify the value stored at that address.

The function changes the value to 98, directly affecting the original variable.

Example implementation:

void reset_to_98(int *n)
{
    *n = 98;
}
🎯 Learning Objectives

Understand what pointers are

Learn how to dereference a pointer

Modify a variable’s value through its memory address

Practice compiling C programs using strict flags

👨‍💻 Author

**sagalou**
Part of the Holberton School Low-Level Programming curriculum.
