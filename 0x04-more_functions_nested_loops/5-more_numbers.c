#include "main.h"

/**
 * print_more_numbers - prints numbers from 0 to 14 ten times
 * Return: Always 0
 */

void more_numbers(void)
{
int j;
int i;
int a = 0;
int b = 0;
for (j = 0; j < 11; j++)
{
for (i = 0; i <= 14; i++)
{
if ( i < 10)
{
_putchar (i + '0');
}

if ((i >= 10) && (i <= 14))
{
a = i / 10;
b = i % 10;
_putchar(a + '0');
_putchar(b + '0');
}
}
_putchar('\n');
}
_putchar ('\n');
return;
}
