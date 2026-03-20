#include "main.h"
/**
* int factorial - Returns the factorial of a given number
* @n: the number to compute the factorial of
*
* Return: n, or -1 if n is lower than 0, or 1 if n is 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

