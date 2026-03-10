#include "main.h"
#include <stdlib.h>

/**
* *string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes to copy from s2
*
* Return: pointer to a newly allocated space, NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	size_t len1, len2, i, to_copy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
		to_copy = len2;
	else
		to_copy = n;

ptr = malloc((len1 + to_copy + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i = 0; i < to_copy; i++)
		ptr[len1 + i] = s2[i];
ptr[len1 + to_copy] = '\0';

	return (ptr);

}
