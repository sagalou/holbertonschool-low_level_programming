#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate
 *
 * Return: nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ptr);
}
