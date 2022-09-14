#include "main.h"
#include <stdio.h>
/**
 * times_table - prints out the multiplication table
 * Return: returns no value
 */
void times_table(void)
{
int a, b, n;

for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
n = a * b;
if (b == 0)
{
_putchar(n + '0');
}
else if (n > 9)
{
_putchar(' ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(n + '0');
}
if (b != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
