Structures and typedef in C

🧠 Project: Structures and Typedef

This project introduces structures (struct) and the typedef keyword in the C programming language.
It focuses on how to organize related data into a single unit and how to simplify complex type declarations.

Structures are widely used in C to represent complex objects composed of multiple attributes, making programs easier to design, maintain, and understand.

This project is part of the holbertonschool-low_level_programming repository and helps strengthen your understanding of data organization and abstraction in C.

📚 Learning Objectives

By the end of this project, you should be able to explain, without the help of Google:

What structures are in C

When and why structures are useful

How to define and use a structure

How to access structure members

How to use the typedef keyword

How typedef simplifies structure declarations

🧠 Key Concepts
Structures

A structure allows you to group multiple variables under a single name.

Each variable inside the structure is called a member.

Structures are useful when representing objects that contain multiple attributes.

Example:

struct Student
{
    char *name;
    int age;
    float grade;
};

This structure represents a student with three attributes.

Using typedef

The typedef keyword allows you to create an alias for an existing data type.

It is often used with structures to make declarations cleaner.

Example:

typedef struct Student
{
    char *name;
    int age;
    float grade;
} Student;

Now you can declare variables like this:

Student s1;

instead of:

struct Student s1;

This improves readability and code simplicity.

💻 Example Program
#include <stdio.h>

typedef struct
{
    char *name;
    int age;
} Person;

int main(void)
{
    Person p1;

    p1.name = "Alice";
    p1.age = 25;

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    return (0);
}

Output:

Name: Alice
Age: 25
⚙️ Compilation

All programs are compiled using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

Environment:

Ubuntu 20.04 LTS

Compiler: gcc

Allowed editors:

vi

vim

emacs

📁 Repository Structure

Example project structure:

0x0E-structures_typedef/
│
├── dog.h
├── 1-init_dog.c
├── 2-print_dog.c
├── 3-dog_t.h
├── 4-new_dog.c
├── 5-free_dog.c
└── README.md
📋 Requirements
General

All files must end with a new line

Code must follow Betty coding style

No global variables

No more than 5 functions per file

The only allowed C standard library functions are:

printf

malloc

free

exit

All header files must be include guarded

A README.md file is mandatory at the root of the project

📖 Resources

Read or watch the following materials:

0x0d. Structures.pdf

Documentation: struct (C programming language)

Documentation: typedef

0x0d. Typedef and structures.pdf

Programming in C by Stephen Kochan
Chapter 8 – Working with Structures (pages 163–189)

Optional advanced reading:

The Lost Art of C Structure Packing

🎯 Project Goal

The goal of this project is to understand how data can be grouped and organized in C using structures and how typedef helps make code cleaner and easier to read.

These concepts are fundamental for building larger and more complex C programs, where managing structured data efficiently becomes essential.

✅ By completing this project, you will gain a deeper understanding of data structures and type abstraction in C programming.