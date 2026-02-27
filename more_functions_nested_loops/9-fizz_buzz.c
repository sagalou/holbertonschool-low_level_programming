#include "main.h"
#include <stdio.h>

/**
* main - prints numbers from 1 to 100 following Fizz-Buzz rules
*
* Description: Prints the numbers from 1 to 100.
* For multiples of three, prints "Fizz" instead of the number.
* For multiples of five, prints "Buzz" instead of the number.
* For multiples of both three and five, prints "FizzBuzz".
* Each number or word is separated by a space.
*
* Return: Always 0.
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
