#include "main.h"

/**
 * print_sign - write the sign
 * Description: printing the sign of a number(+, -, 0)
 * @n: input character
 * Return: 1 if n is greater than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	return (0);
}
