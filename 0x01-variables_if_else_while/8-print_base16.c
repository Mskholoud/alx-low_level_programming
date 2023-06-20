#include <stdio.h>
/**
  *main - entry point
  *Description: printing reversed alphabets
  *Return: always 0
*/
int main(void)
{
int a = 0;
char b = 97;
while (a <= 9)
{putchar (a + '0');
a++;
}
while (b <= 102)
{putchar (b);
b++;
}
putchar ('\n');
return (0);
}
