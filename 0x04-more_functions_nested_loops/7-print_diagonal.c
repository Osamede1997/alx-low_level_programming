#include "main.h"

/**
 * print_diagonal - draws a diagonal line in terminal
 * @n: print int
 * Return: Always 0
 */

void print_diagonal(int n)
{
int i, j;

if (n < 1)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
return;
}
