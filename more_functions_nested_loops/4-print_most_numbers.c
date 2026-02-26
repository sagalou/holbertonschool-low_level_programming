#include "main.h"
#include <stdio.h>
/**
* print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4.
*
* Description: Prints digits 0-9 excluding 2 and 4, followed by a new line.
* Uses _putchar function to output each character.
*/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
