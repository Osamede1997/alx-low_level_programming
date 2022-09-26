#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: pointer to put constant
 * @b: constant
 * @n: max byte used 
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0 ; i++, n--)
{
s[i] = b;
}
return (s);
}
