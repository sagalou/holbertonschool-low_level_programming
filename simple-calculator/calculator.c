#include <stdio.h>

/**
 * add - Sum
 * @a: First
 * @b: Second
 * Return: Sum
 */
double add(double a, double b)
{
	return (a + b);
}

/**
 * subtract - Diff
 * @a: First
 * @b: Second
 * Return: Diff
 */
double subtract(double a, double b)
{
	return (a - b);
}

/**
 * multiply - Product
 * @a: First
 * @b: Second
 * Return: Product
 */
double multiply(double a, double b)
{
	return (a * b);
}

/**
 * divide - Quotient
 * @a: First
 * @b: Second
 * Return: Quotient
 */
double divide(double a, double b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int choice;
	double a, b, r;

	while (printf("1. Add\n2. Substract\n3. Multiply\n4. Divide\n0. Quit\nChoice: ") &&
	       scanf("%d", &choice) == 1 && choice != 0)
	{
		if (choice < 1 || choice > 4)
		{
			printf("Invalid choice\n");
			continue;
		}
		printf("A and B: ");
		if (scanf("%lf %lf", &a, &b) != 2)
			break;
		if (choice == 1)
			r = add(a, b);
		else if (choice == 2)
			r = subtract(a, b);
		else if (choice == 3)
			r = multiply(a, b);
		else
			r = divide(a, b);
		printf("Result: %.2f\n", r);
	}
	return (0);
}
