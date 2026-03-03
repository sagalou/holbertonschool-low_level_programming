#include "main.h"

/**
* puts_half - print half of a string
*@str: pointer to the string
*
* Return: void
*/

void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len + 1) / 2;
	int start = len - n;

	str = str + start;

	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
