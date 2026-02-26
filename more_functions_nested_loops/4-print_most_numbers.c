#include "main.h"
#include <stdio.h>
/**
* print_numbers - Prints the numbers from 0 to 9, followed by a new line.
*
* Description: You can only use _putchar twice in your code.
* This requires using a loop to iterate through the digits.
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
