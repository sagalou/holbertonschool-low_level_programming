#include <stdlib.h>
#include <stdio.h>
/**
* main - Prints the number of arguments, followed by a new line
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
