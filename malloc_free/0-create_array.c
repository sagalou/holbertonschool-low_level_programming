#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, or NULL if size = 0 or malloc fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	i = 0;

	if (size == 0 || ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
