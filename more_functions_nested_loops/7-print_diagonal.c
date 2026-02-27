#include "main.h"
#include <stdio.h>

/**
* print_diagonal - Draws a diagonal line on the terminal.
* @n: The number of times the character \ should be printed.
*
* Description: Prints the character \ 'n' times, with each backslash
* preceded by an increasing number of spaces. Ends with a new line.
* If n is 0 or less, only a new line is printed.
*/
void print_diagonal(int n)
{
	int ligne, espace;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ligne = 0; ligne < n; ligne++)
		{
			espace = 0;
			while (espace < ligne)
			{
				_putchar(' ');
				espace++;
			}

			_putchar('\\');
			_putchar('\n');
		}
	}

}
