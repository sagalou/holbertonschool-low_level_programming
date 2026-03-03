#include "main.h"

/**
 * _puts - point the length of a string
 * @str: pointer to the string
 *
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
