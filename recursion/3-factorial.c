#include "main.h"
/**
* int factorial - Returns the factorial of a given number
* @n: the number to be counted
*
* Return: n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n -1));
}

