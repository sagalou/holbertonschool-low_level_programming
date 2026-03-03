#include "main.h"

/**
* print_rev - print a string in reverse
*@s: pointer to the end of the string
*
*/
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		_putchar(*(s + len - 1));
		len--;
	}
	_putchar('\n');
}
