#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */
int main(void)
{
int n;
for (n = 0; n <= 99; n++)
{
putchar(n/10 + '0');
putchar(n%10 + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
