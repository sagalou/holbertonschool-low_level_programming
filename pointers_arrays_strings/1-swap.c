#include "main.h"

/**
* swap_int - swaps the value of two integrers
* @a: pointer to the first integer
* @b: pointer to the second integer
*
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
