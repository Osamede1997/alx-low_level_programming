#include "main.h"

/**
 * _strpsn - return len 
 * @s: string
 * @accept: character to match
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, a;

for (i = 0; s[i] >= '\0', i++)
{
for (j = 0; accept[j] >= '\0'; j++)
{
if (s[i] == accept[j])
{
a++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (a);
}
