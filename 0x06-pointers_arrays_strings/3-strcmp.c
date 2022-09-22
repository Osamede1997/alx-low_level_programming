#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1:parameter tested
 * @s2: paremeter tested
 * Return: positive, negative integer or 0
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
break;
}
i++;
}
return (s1[i] - s2[i]);
}
