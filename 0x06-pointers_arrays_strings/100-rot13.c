#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: parameter tested
 * Return: pointer to s
 */

char *rot13(char *s)
{
int i, j;

char b[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char c[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 54; j++)
{
if (s[i] == b[j])
{
s[i] = c[j];
break;
}
}
}
return (s);
}
