### C - Variadic function ###

**Description**

- Ce projet porte sur l'apprentissage et l'implémentation des fonctions variadiques en langage C. L'objectif est de comprendre comment manipuler un nombre indéfini d'arguments à l'aide de la bibliothèque <stdarg.h>.

**Requirements**
General
- Allowed editors: vi, vim, emacs
- Compilation: All files will be compiled on Ubuntu 20.04 LTS using gcc.
- Compilation options: -Wall -Werror -Wextra -pedantic -std=gnu89
- Style: All code must adhere to the Betty style.
- Global variables: Not allowed.
- Function limit: No more than 5 functions per file.
- Header file: All prototypes must be included in variadic_functions.h and must be include guarded.

**Authorized Functions and Macros**
- malloc, free, exit
- va_start, va_arg, va_end
- _putchar

**Files**
File                   Description
0-sum_them_all.c       Returns the sum of all its parameters.
1-print_numbers.c      Prints numbers, followed by a new line.
2-print_strings.c      Prints strings, followed by a new line.
3-print_all.c          Prints anything (char, integer, float, string).
variadic_functions.h   Header file containing all function prototypes and guards.

Compilation & UsagePour compiler vos fichiers avec un fichier main.c de test :
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c 0-sum_them_all.c -o a

Authors Sagalou - Ton profil GitHub