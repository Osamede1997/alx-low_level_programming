#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory allocated
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
int *mem = malloc(b);

if (mem == NULL)
{

exit(98);
}
return (mem);
}
