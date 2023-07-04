#include "main.h"

/**
 * print_line - entry point
 * Description: draws a straight line in the terminal
 * void: nothing
 * @n: an integer
 * Return: is void
*/

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
