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

for (n = 0; n <= 89; n++)
{
e = (n/10 + '0');
b = (n%10 + '0');

if ((e * b == b * e) && (e + b == b + e))
{
break;
}
else
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
