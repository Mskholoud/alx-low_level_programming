#include "main.h"

/**
 * times_table - write the time table
 * Description: print the 9 times table
 * @void: character
 * Return: 1 or 0
*/
void times_table(void)
{
	int x, y, m;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			m = x * y;
			if (y == 0)
			{
				_putchar('0');
				continue;
			}
			_putchar(',');
			_putchar(' ');

			if (m / 10 == 0)
				_putchar(' ');
			else
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
