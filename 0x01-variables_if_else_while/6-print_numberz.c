#include <stdio.h>
/**
  *main - entry point
  *Description: printing numbers
  *Return: always 0
*/
int main(void)
{
int a = 0;
while (a <= 9)
{
putchar (a + '0');
a++;
}
putchar('\n');
return (0);
}
