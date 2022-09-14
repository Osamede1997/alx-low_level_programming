#include "main.h"
#include "stdio.h"
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
for (a = n; a < 98; a++)
{
printf("%i, ", a);
}
printf("98\n");
}
else if (n > 98)
{
for (a = n; a > 98; a--)
{
printf("%i, ", a);
}
printf("98\n");
}
else (n == 0)
{
printf("98\n");
}
return;
}
