#include "main.h"

/**
 * *_strpsn - return number of ocurence of string
 * @s: string to check
 * @accept: character to match
 * 
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j, a = 0;


for (i = 0; s[i] >= '\0'; i++)
{
for (j = 0; accept[j] > '\0'; j++)
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
