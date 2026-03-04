#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes to copy
 *
 * Return: pointer to the memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
