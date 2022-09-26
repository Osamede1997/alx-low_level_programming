#include "main.h"

/**
 * _memcpy - copies a string
 * @src: parameter tested
 * @dest: paremeter tested
 * @n: parameter tested
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
