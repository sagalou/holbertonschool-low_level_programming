#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (i == n - 1)
			printf("%d", num);
		else
		{
			printf("%d", num);
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
