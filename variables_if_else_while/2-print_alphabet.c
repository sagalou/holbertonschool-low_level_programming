#include <stdio.h>

/**
* main - Prints the alphabet in lowercase followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter); /* First use of putchar */
	}
	putchar('\n'); /* Second use of putchar */
	return (0);
}
