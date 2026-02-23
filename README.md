# Holberton School - Low Level Programming

## Description
This repository contains projects and exercises related to low-level programming in C, completed as part of the Holberton School curriculum. The goal is to understand how C works at a fundamental level, from compilation to memory management.

## Author
**Sagalou** - Holberton School Student

## Projects

### Hello World (`hello_world`)
Introduction to C programming and the compilation process.

| File | Description |
|------|-------------|
| `0-preprocessor` | Script that runs a C file through the preprocessor |
| `1-compiler` | Script that compiles a C file without linking |
| `2-assembler` | Script that generates assembly code from a C file |
| `3-name` | Script that compiles a C file and creates an executable |

## Compilation
All C files are compiled with:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Style
All C code follows the **Betty** coding style. To check:
```bash
betty <filename>
```

## Requirements
- Ubuntu 20.04 LTS
- gcc (GNU Compiler Collection)
- Betty linter

## The Compilation Process
1. **Preprocessing** - Handles `#include`, `#define` directives
2. **Compilation** - Converts C code to assembly
3. **Assembly** - Converts assembly to machine code (`.o` files)
4. **Linking** - Links object files to create the final executable
