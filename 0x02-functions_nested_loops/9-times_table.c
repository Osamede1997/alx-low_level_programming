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
_putchar('0');
for (b = 1; a < 8; b++)
{
_putchar(',');
_putchar(' ');

n = a * b;
if (n <= 9)
{
_putchar(' ');
}
else
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
}
}
_putchar('\n');
return;
}
