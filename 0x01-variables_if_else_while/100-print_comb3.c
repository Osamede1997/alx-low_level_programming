#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */
int main(void)
{
int n, e, b;

n = 0;

while (n < 100)
{
e = (n/10 + '0');
b = (n%10 + '0');

if (e < b)
{
putchar(e);
putchar(b);
if (n < 89)
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
