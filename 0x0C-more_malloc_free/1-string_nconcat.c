#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mylen - calculates length of string
 * @s: string
 * Return: length of string
 */

int mylen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}


/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to new concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len, i, j;

char *new;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

len = mylen(s1);


new = malloc((len + n + 1) * sizeof(char));

if (new == 0)
{
return (0);
}

for (i = 0; s1[i] != '\0'; i++)
{
new[i] = s1[i];
}

for (j = 0; s2[j] != '\0' && j < n; i++, j++)
{
new[i] = s2[j];
}

new[i] = '\0';

return (new);
}
