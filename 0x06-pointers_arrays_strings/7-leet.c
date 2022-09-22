#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * @s: parameter tested
 * Return: pointer to s
 */

char *leet(char *s)
{
int i, j;
char a[] = "aeotl";
char b[] = "AEOTL";
char c[] = "43071";


for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == a[j] || s[i] == b[j])
{
s[i] = c[j];
break;
}
}
}
return (s);
}
