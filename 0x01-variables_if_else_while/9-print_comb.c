#include <stdio.h>
/**
  *main - entry point
  *Description: printing reversed alphabets
  *Return: always 0
*/
int main(void)
{
int a = 0;
while (a <= 9)
{putchar (a + '0');
if (a != 9)
{
putchar (',');
putchar (' ');
}
a++;
}
putchar ('\n');
return (0);
}
