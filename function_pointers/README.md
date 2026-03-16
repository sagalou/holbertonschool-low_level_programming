# C - Function Pointers

🧠 **Project: Function Pointers**

This project is part of the **holbertonschool-low_level_programming** repository and focuses on learning how to use **function pointers in C**.

The goal is to strengthen understanding of **low-level programming**, memory organization, and how functions can be passed as arguments to other functions.

---

## 📚 Learning Objectives

At the end of this project, you should be able to explain to anyone, without the help of Google:

- What **function pointers** are and how to use them
- What a **function pointer exactly holds**
- Where a **function pointer points to in virtual memory**
- How to **pass functions as arguments**
- How to implement simple **callback behavior in C**

---

## 🧠 Concepts Covered

This project explores the following concepts:

- Function pointers
- Passing functions as parameters
- Callback functions
- Memory addresses and executable code

Understanding these concepts helps build strong foundations in **C programming** and **system-level development**.

---

## 💻 Example

Example demonstrating the use of a function pointer:

```c
#include <stdio.h>

void hello(void)
{
    printf("Hello from function pointer!\n");
}

int main(void)
{
    void (*f)(void);

    f = hello;
    f();

    return (0);
}
