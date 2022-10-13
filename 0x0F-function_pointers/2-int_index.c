#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 * return: integer
 */



int int_index(int *array, int size, int (*cmp)(int))
{
int index_i;

if (array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (index_i);
}

return (-1);
}
