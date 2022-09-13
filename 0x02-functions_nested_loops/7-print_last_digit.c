#include "main.h"

/**
 * print_last_digit - Prints the last digit of an int
 * @n : integer to be tested
 * Return - the value of last digit of the number
 */

int print_last_digit(int n)
{
int a;
if (n > 0)
{
a = (n % 10);
_putchar(a + '0');
return (a);
}
else 
{
a = (-1 * n) % 10;
_putchar(a + '0');
return (a);
}
}
