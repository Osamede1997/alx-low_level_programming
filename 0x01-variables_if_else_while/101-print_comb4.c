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

if (a < b && b < c)
{
putchar(a);
putchar(e);
putchar(b);
if (n < 789)
{
putchar(',');
putchar(' ');
}
}
n++;
}
putchar('\n');
return (0);
}
