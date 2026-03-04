#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i = 0;
	int next = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
			next = 1;
		else if (next == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			next = 0;
		}
		else
			next = 0;
		i++;
	}
	return (str);
}
