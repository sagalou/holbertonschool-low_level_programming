#include "main.h"

/**
* print_rev - print a string in reverse
*@s: pointer to the end of the string
*
*/
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
    end++;

    while (end > s)
	{
		end--;
        _putchar(*end);
	}
	_putchar('\n');
}
