#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: pointer to the string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
