#include "main.h"
#include <stdio.h>

/**
 * string_toupper - check the code
 * @src: input string to convert
 *
 * Return: pointer to modified string
 */

char *string_toupper(char *src)
{
	char *result = src;
	int i = 0;

	while (src[i] != '\0')
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			src[i] = src[i] - 32;
		i++;
	}
return (result);
}
