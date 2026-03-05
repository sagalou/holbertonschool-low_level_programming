#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing accepted characters
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
	int found;

	while (*s != '\0')
	{
		j = 0;
		found = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				found = 1;
			j++;
		}
		if (found == 1)
			return (s);
		s++;
	}
	return (NULL);
}
