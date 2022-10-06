#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: array size
 * @c: first character
 * return: pointer to array
 */

char *create_array(unsigned int size, char c)
{

int i;
char *d = malloc(sizeof(char) * size);

if (size == 0 || d == 0)
{
return (0);
}

for (i = 0; i < size; i++)
{
d[i] = c;
}
return (d);
}
