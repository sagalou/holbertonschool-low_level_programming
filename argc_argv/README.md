# C - argc, argv

## Description

This project is part of the Holberton School low-level programming curriculum. It introduces the use of command-line arguments in C programs through the `argc` and `argv` parameters of the `main` function.

## Learning Objectives

At the end of this project, you should be able to explain:

- How to use arguments passed to your program
- The two prototypes of `main` and when to use each one
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## Prototypes of main

```c
int main(void);                      /* no arguments needed */
int main(int argc, char *argv[]);    /* when using command-line arguments */
```

- `argc` — the number of arguments passed to the program (including the program name)
- `argv` — an array of strings containing each argument

## Requirements

- All files compiled on Ubuntu 20.04 LTS
- Compiler: `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No global variables allowed
- No more than 5 functions per file
- Code must follow Betty style

## Functions

| File | Description |
|------|-------------|
| `0-whatsmyname.c` | Prints the name of the program |
| `1-args.c` | Prints the number of arguments passed |
| `2-args.c` | Prints all arguments, one per line |
| `3-mul.c` | Multiplies two numbers passed as arguments |
| `4-add.c` | Adds positive numbers passed as arguments |

## Notions Learned

- **argc** — argument count, always at least 1 (the program name)
- **argv** — argument vector, array of strings where `argv[0]` is the program name
- **argv[0]** — contains the name (and path) of the program itself
- **`(void)`** — used to suppress unused variable warnings
- **`__attribute__((unused))`** — tells the compiler a variable is intentionally unused

## Repository

- **GitHub repository:** `holbertonschool-low_level_programming`
- **Directory:** `argc_argv`
