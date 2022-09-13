#include "main.h"

/**
 * print_sign - checks if int is less, equal or greater than 0
 * @n : integer to be tested
 * Return: 0 if zero, 1 if positive and -1 if negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
