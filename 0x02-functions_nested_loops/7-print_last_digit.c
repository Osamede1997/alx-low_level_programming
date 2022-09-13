#include "main.h"

/**
 * print_last_digit - Prints the last digit of an int
 * @n : integer to be tested
 * Return - the value of last digit of the number
 */

int print_last_digit(int n)
{
if (n > 0)
{

n = (n % 10);
_putchar(n + '0');
return (n);

}
else 
{
n = (-1 * n) % 10;
_putchar(n + '0');
return (n);
}
}
