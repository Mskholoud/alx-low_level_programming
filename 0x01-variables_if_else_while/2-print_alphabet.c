#include <stdio.h>

/**
 * main - Entry point
 * description: prints the alphabet in lowercase
 * Return: always 0 (success)
*/


int main(void)
{
int kh = 97;

while (kh <= 122)
{
	putchar(kh);
	kh++;
}
putchar('\n');
return (0);
}
