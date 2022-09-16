#include "main.h"

/**
 * print_triangle - draws a diagonal line in terminal
 * @size: print int
 * Return: Always 0
 */

void print_triangle(int size)
{
int i, j;

if (size < 1)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 0; j < size - i; j++)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
}
return;
}
