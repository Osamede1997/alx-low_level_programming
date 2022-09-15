#include "main.h"

/**
 * print_square - print a square
 * @size: print int
 * Return: return void
 */

void print_square(int size)
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
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
