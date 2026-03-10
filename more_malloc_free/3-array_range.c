#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* *array_range - creates an array of integers
* @min: mininum value
* @max: maximum value
*
* Return: pointer to the newly created array, or NULL on failure
*/
int *array_range(int min, int max)
{
int *ptr;
int i;

if (min > max)
	return (NULL);

ptr = malloc((max - min + 1) * sizeof(int));

if (ptr == NULL)
	return (NULL);

for (i = 0; i <= max - min; i++)
	ptr [i] = min + i;

return (ptr);
}
