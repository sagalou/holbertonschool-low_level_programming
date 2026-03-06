#include <stdlib.h>
#include <stdio.h>
/**
* main - Prints the result of the multiplication, followed by a new line
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
