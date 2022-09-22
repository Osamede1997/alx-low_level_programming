#include "main.h"

/**
 * _strncpy - copies a string
 * @src: parameter tested
 * @dest: paremeter tested
 * @n: parameter tested
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
