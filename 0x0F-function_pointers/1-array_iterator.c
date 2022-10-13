#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * @array: The array
 * @size: size of array
 * @action: pointer to function
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{

if (array == NULL || action == NULL)
{
return;
}

while (size--)
{
action(*array);
array++;
}

}
