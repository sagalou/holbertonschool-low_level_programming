# Holberton School - Low Level Programming

## Description
This is a simple interactive terminal-based calculator written in C. It performs basic arithmetic operations using user-provided numbers. This project was built to practice modular programming, input handling with `scanf`, and strict adherence to the **Betty** coding style.


## Author
**Sagalou** - Holberton School Student

## Projects
Calculator (calculator.c)
A menu-driven application that performs basic arithmetic while handling edge cases like division by zero.

## Features
* **Addition**: Sum of two numbers.
* **Subtraction**: Difference between two numbers.
* **Multiplication**: Product of two numbers.
* **Division**: Quotient of two numbers (with a safety check for division by zero).
* **Decimal Support**: Uses `double` precision for calculations.

## Compilation
To compile this program, use the following command with the required strict flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
