#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337 speak
 * @str: the string to encode
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	char from[] = "aAeEoOtTlL";
	char to[]   = "4433007711";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		j = 0;
		while (from[j] != '\0')
		{
			if (str[i] == from[j])
			str[i] = to[j];
			j++;
		}
		i++;
	}
	return (str);
}
