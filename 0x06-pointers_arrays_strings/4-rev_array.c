#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: parameter tested
 * @n: parameter tested
 * Return: void
 */

void reverse_array(int *a, int n)
{
int tmp;
int i;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
