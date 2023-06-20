#include <stdio.h>
/**
  *main - entry point
  *Description: printing reversed alphabets
  *Return: always 0
*/
int main(void)
{
int a = 122;
while (a >= 97)
{putchar (a);
a--;
}
putchar ('\n');
return (0);
}
