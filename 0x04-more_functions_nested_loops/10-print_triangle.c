#include "main.h"

/**
 * print_triangle - draws a diagonal line in terminal
 * @size: print int
 * Return: Always 0
 */

void print_triangle(int size)
{
int i, j, f, b;

b = size - 1;

if (size < 1)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0 ; j < b; j++)
{
_putchar(' ');
}
for (f = 0; f <= i; f++)
{
_putchar('#');
}
b--;
_putchar('\n');
}
}
return;
}
