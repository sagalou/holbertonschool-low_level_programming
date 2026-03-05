#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: pointer to the matrix
 * @size: size of the matrix
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	i = 0;
	while (i < size)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d, %d\n", diag1, diag2);
}
