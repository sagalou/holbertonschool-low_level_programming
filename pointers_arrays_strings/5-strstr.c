#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] != '\0' && haystack[i] == needle[i])
		{
			i++;
		}
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
