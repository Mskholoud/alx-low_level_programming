#include "main.h"

/**
 * more_numbers - entry point
 * Description: prints the numbers, from 0  to 14
 * void: integer to be checked
 * Return: is always 0
*/

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');

		}
		putchar('\n');
	}
}
