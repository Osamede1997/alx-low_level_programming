#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */
int main(void)
{
int n, a, b, c;

n = 0;

while (n < 1000)
{
a = (n / 100 + '0');
b = (n / 10 + '0');
c = (n % 10 + '0');

putchar(a);
putchar(b);
putchar(c);
putchar(',');
putchar(' ');

while (n >= 100 && n > 100)



n++;
}
putchar('\n');
return (0);
}
