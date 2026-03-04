#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Return: NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
return (NULL);
}
