#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer
*
* Description: The function prints all minutes of the day starting
* from 00:00 to 23:59, in the format HH:MM.
*
* Return: void
*/
void jack_bauer(void)
{

	int h, m;

	int h_diz, h_uni, m_diz, m_uni;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			h_diz = h / 10;
			h_uni = h % 10;
			m_diz = m / 10;
			m_uni = m % 10;

			_putchar(h_diz + '0');
			_putchar(h_uni + '0');
			_putchar(':');
			_putchar(m_diz + '0');
			_putchar(m_uni + '0');
			_putchar('\n');
		}
	}
}
