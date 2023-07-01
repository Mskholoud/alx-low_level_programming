#include "main.h"

/**
 * _isalpha - check the code
 * Description: checks for alphabetic character
 * @c: The character to print
 * Return: 1 if c is lowercase or uppercase
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
