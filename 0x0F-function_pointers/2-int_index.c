#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * return: 0 or -1 or the index of first element
 */



int int_index(int *array, int size, int (*cmp)(int))
{
int index_i;

if (array == NULL || cmp == NULL)
{
return (-1);
}

for (index_i = 0; index_i < size; index_i++)
{
if (cmp(array[index_i]) != 0)
{
return (index_i);
}
}

return (-1);
}
