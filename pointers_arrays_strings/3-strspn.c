#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing accepted characters
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int j;
	int found;

	while (*s != '\0')
	{
		j = 0;
		found = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				found = 1;  /* on a trouvé ! */
			j++;
		}
		if (found == 1)
			count++;
		else
			return (count);  /* pas trouvé → on arrête */
		s++;
	}
	return (count);
}
