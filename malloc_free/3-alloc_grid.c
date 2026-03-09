#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - allocate a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2D array, or NULL if malloc fails
 */

int **alloc_grid(int width, int height)
{
  int **ptr;
  int i, j;

  if (width <= 0 || height <= 0)
	return (NULL);

  ptr = malloc(height * sizeof(int *));
  if (ptr == NULL)
	return (NULL);

  for (i = 0; i < height; i++)
  {
	ptr[i] = malloc(width * sizeof(int));
	if (ptr[i] == NULL)
	  return (NULL);
	for (j = 0; j < width; j++)
	  ptr[i][j] = 0;
  }

  return (ptr);
}
