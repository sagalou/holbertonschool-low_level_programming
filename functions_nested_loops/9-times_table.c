#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, result, diz, uni;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			diz = result / 10;
			uni = result % 10;

			if (j == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('0' + diz);
				}
				_putchar('0' + uni);
			}
		}

		_putchar('\n');
	}
}
