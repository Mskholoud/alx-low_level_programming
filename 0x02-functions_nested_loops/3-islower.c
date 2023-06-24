#include "main.h"

/**
 * _islower - check the code
 * Description: prints the alphabet in lowercase ten times
 * @c: input character
 * Return: 1 if c is lowercase
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
