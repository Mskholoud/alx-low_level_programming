#include "main.h"

/**
 * jack_bauer - write the minutes
 * Description: prints every minute of the day of Jack Bauer
 * @void: character
 * Return: 1 or 0
*/
void jack_bauer(void)
{
	int hr, mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn < 60; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}

