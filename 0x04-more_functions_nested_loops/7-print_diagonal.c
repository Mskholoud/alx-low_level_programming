#include "main.h"

/**
 * print_diagonal - entry point
 * Description: draws a diagonal line on the terminal
 * void: nothing
 * @n: an integer
 * Return: is void
*/
void print_diagonal(int n)
{
int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar ('\\');
			_putchar('\n');
				}
	}
	else
	{
		_putchar ('\n');
	}
}
