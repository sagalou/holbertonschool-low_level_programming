#include <stdio.h>

/**
* main - Prints the alphabet in lowercase followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int (number);
	char (letter);

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar (letter);
	}
	putchar('\n');
	return (0);
}
