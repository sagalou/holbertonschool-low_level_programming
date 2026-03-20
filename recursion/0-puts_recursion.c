#include <stdio.h>
/**
 * _puts_recursion - Prints a string
 * @s: the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
  