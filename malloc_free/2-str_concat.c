#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	ptr = malloc((len1 + len2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		ptr[len1 + i] = s2[i];
	ptr[len1 + len2] = '\0';

	return (ptr);
}
