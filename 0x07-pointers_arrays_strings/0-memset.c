#include "main.h"

/**
 * _strcat - join two strings
 * @s: character tested
 * @b: character tested
 * @n: character tested
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
