#include "main.h"

/**
 * _abs - absolute function
 * Description: computes the absolute value of an integer
 * @n: input character
 * Return: is always zero
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
