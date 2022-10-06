#include "main.h"

/**
 * _strchr - function that locates a character in string
 * @s: string
 * @c: character searched for
 * Return: Pointer to the first occurrence of the character c in the string s
 */


char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (s);
}
