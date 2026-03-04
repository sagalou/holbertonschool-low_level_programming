#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the byte to fill with
 * @n: the number of bytes to fill
 *
 * Return: pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
