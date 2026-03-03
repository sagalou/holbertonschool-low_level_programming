#include "main.h"

/**
* _strlen - return the length of a string
*@s: pointer to the string
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}
