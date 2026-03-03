#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: des
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
