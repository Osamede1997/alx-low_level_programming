#include "main.h"

char *_strpbrk(char *s, char *accept)
{
int a, b;
char *c;

a = 0;
while (s[a] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if (accept[b] == s[a])
{
c = &s[a];
return (c)
}
b++;
}
a++;
}
return (0);
}
