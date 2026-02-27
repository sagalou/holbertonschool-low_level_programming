#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square using the character #
 * @size: size of the square
 *
 * Description: Prints a square of size x size using the
 * character #, followed by a new line. If size is 0 or
 * less, it prints only a new line.
 */

void print_square(int size)
{
	int ligne, espace;

	if (size <= 0)
	{
		_putchar('\n');

	}
	else
	{
		for (ligne = 0; ligne < size; ligne++)
		{
			for (espace = 0; espace < size; espace++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}

