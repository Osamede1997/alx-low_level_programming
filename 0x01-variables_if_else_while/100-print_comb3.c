#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */
int main(void)
{
int n;
int e;
int b;

while (n < 100)
{
n = 0;
e = (n/10 + '0');
b = (n%10 + '0');

if (e < b)
{
putchar(e);
putchar(b);
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
