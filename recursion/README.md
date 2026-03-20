**C - Recursion**
**Description**
Ce projet porte sur l'apprentissage et l'implémentation de la récursion en langage C. L'objectif est de comprendre comment une fonction peut s'appeler elle-même pour résoudre des problèmes complexes en les divisant en sous-problèmes plus simples.

**Requirements**
General
- Allowed editors: vi, vim, emacs
- Compilation: All files will be compiled on Ubuntu 20.04 LTS using gcc.
- Compilation options: -Wall -Werror -Wextra -pedantic -std=gnu89
- Style: All code must follow the Betty style (checked with betty-style.pl and betty-doc.pl).Global variables: Not allowed.
- Function limit: No more than 5 functions per file.
- Standard Library: The only functions allowed are _putchar. Functions like printf, puts, etc., are forbidden.
- Header file: All prototypes must be included in main.h and must be include guarded.

Files
File                         Description
0-puts_recursion.c          Prints a string, followed by a new line.
1-print_rev_recursion.c     Prints a string in reverse.
2-strlen_recursion.c        Returns the length of a string.
3-factorial.c               Returns the factorial of a given number.
4-pow_recursion.c           Returns the value of x raised to the power of y.
5-sqrt_recursion.c          Returns the natural square root of a number.
6-is_prime_number.c         Returns 1 if the input integer is a prime number, otherwise return 0.
main.h                      Header file containing all function prototypes.

**Compilation & Usage**
Pour tester une fonction (ex: 0-puts_recursion.c), compilez avec votre fichier de test main.c :Bashgcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts ./0-puts

**Author**
Sagalou - GitHub