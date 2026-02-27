#include "main.h"
#include <stdio.h>

/**
* print_triangle - prints a right-aligned triangle using #
* @size: size of the triangle
*
* Description: Prints a right-aligned triangle of height size
* using the character #. Each row is followed by a new line.
* If size is 0 or less, the function prints only a new line.
*/

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (space = 0; space < size - row - 1; space++)
			_putchar(' ');

			for (hash = 0; hash < row + 1; hash++)
			_putchar('#');

			_putchar('\n');
		}
	}
}



