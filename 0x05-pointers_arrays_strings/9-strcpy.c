#include "main.h"

/**
 * *_strcpy - copies a string
 * @src: parameter tested
 * @dest: paremeter tested
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);
}
