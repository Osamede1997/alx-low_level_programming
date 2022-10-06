#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char
 * @size: array size
 * @c: first character
 * return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
char *d = malloc(size);

if (size == 0 || d == 0)
{
return (0);
}

while (size--)
{
d[size] = c;
}
return (d);
}
