#include "main.h"

/**
 * print_last_digit - Prints the last digit of an int
 * @n : integer to be tested
 * Return: value of last digit of @n
 */

int print_last_digit(int n)
{
int a = n % 10;
if (n < 0)
{
a =  -1 * (n % 10);
}
_putchar(a + '0');
return (a);
}
