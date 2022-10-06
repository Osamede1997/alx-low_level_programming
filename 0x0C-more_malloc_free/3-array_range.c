#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: array min
 * @max: array max
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
int *array, i, array_size = max - min + 1;

if (min > max)
{
return (NULL);
}

array = malloc(sizeof(int) * array_size);

if (array == 0)
{
return (0);
}

for (i = 0; i < array_size; i++)
{
array[i] = min + i;
}

return (array);

}
