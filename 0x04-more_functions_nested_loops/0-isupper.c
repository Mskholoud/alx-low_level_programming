#include "main.h"

/**
 * _isupper - the uppercase character
 * Description: checks for uppercase character
 * @c: charcter
 * Return: is 1 or 0
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
