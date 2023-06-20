#include <stdio.h>
/**
  *main - entry point
  *Description: printing alphabates
  *Return: always 0
*/
int main(void)
{
int a = 65;
int b = 97;
while (a <= 90)
{putchar(a);
a++;
}
while (b <= 122)
{putchar(b);
b++;
}
return (0);
}
