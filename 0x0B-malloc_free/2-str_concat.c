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
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
int len1, len2, i;

char *new;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

len1 = mylen(s1);
len2 = mylen(s2);

new = malloc((len1 + len2 + 1) * sizeof(char));

if (new == 0)
{
return (0);
}

for (i = 0; i <= len1 + len2; i++)
{
if (i < len1)
{
new[i] = s1[i];
}
else
{
new[i] = s2[i - len1];
}
}

return (new);

}
