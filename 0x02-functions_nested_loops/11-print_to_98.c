#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - write till 98
 * Description:  prints all natural numbers from n to 98
 * @n: an integer
 * Return: always 0
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
