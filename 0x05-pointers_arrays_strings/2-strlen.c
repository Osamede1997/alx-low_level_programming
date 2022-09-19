#include "main.h"

/**
 * _strlen - get length of string
 * @s: parameter tested
 * Return: length of string
 */

int _strlen(char *s)
{
int len;
len = 0;

while (*s != 0)
{
s++;
len++;
}
return (len);
}
