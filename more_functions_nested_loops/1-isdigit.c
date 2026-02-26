#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if a character is a number
 * @c: the character to check
 *
 * Return: 1 if it's a number, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
