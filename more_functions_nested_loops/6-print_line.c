#include "main.h"
#include <stdio.h>
/**
* print_line - Draws a straight line in the terminal.
* @n: The number of times the character _ should be printed.
*
* Description: Prints the character _ 'n' times followed by a new line.
* If n is 0 or less, only a new line is printed.
*/
void print_line(int n)

{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
