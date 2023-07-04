#include "main.h"

/**
 * print_most_numbers - entry point
 * Description: prints the numbers, from 0  to 9 except 2 and 4
 * void: integer to be checked
 * Return: is always 0
*/

void print_most_numbers(void)

{
	int x;

	for (x = 48; x <= 57; x++)

	{
		if (x  != 50 && x != 52)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
