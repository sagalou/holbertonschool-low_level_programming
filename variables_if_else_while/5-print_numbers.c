#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10 starting from 0,
* followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number); /* First use of putchar */
	}
	putchar('\n'); /* Second use of putchar */
	return (0);
}
