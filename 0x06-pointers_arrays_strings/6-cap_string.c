#include "main.h"

/**
 * cap_string - Write a function that encodes a string into 1337
 * @s: parameter tested
 * Return: pointer to s
 */

char *cap_string(char *s)
{
int i, j, pin;
char a[] = ",;.!? \"(){}\n\t";

for (i = 0; s[i] != '\0'; i++)
{
pin = 0;
if (i == 0)
{
pin = 1;
}
else 
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i - 1] == a[j])
{
pin = 1;
break;
}
}
}
if (pin == 1)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
}
return (s);
}
