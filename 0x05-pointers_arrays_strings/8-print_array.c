#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: parameter tested
 * @n: parameter tested
 * Return: void
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%i", a[i]);
if (i > 0 && i != n)
{
printf(", ");
}
}
printf("\n");
}
