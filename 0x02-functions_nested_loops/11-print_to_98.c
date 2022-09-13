#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: integer to be used
 * Return: return value is 0 for success
 */

void print_to_98(int n)
{
int a;
if (n < 98)
{
for (a = n; n <= 98; a++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
else if (n > 98)
{
for (a = n; a >= 98; a--)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(n + '0');
}
return (0);
}
