#include "main.h"

/**
 * swap_int - swap ints
 * @a: parameter tested
 * @b: parameter tested
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
