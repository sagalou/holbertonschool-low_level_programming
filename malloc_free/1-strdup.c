#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL or
 * malloc fails
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		ptr[i] = str[i];

	return (ptr);
}
