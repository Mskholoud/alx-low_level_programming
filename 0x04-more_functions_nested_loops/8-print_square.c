#include "main.h"

/**
 * print_square - entry point
 * Description: prints a square, followed by a new line
 * void: nothing
 * @size: an integer
 * Return: is void
*/

void print_square(int size)
{
	int size, column;

	if (n > 0)
	{
	for (size = 0; size < n; size++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
	}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
