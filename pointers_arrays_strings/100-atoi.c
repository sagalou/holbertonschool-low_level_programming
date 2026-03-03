#include "main.h"
#include <stdio.h>

/**
* _atoi - convert a string to an integer
* @s: pointer to the string
*
* Return: the integer converted from the string
*/

int	_atoi(char *s)
{
	int	sign;

	int	result;

	int	sign_count;

	int	digit_found;

	sign = 1;
	result = 0;
	sign_count = 0;
	digit_found = 0;
	while (*s)
	{
		if (digit_found)
		{
			if (*s >= '0' && *s <= '9')
				result = result * 10 + (*s - '0');
			else
				break;
		}
		else
		{
			if (*s == '-')
				sign_count++;
			else if (*s >= '0' && *s <= '9')
			{
				digit_found = 1;
				result = *s - '0';
			}
		}
		s++;
	}
	if (sign_count % 2 != 0)
		sign = -1;
	return (sign * result);
}
