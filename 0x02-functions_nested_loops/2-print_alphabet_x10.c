#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * Description: prints the alphabet in lowercase ten times
 *
*/
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (j = 1; j <= 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
~
