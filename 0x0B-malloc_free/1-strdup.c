#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -function that returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: pointer
 */

char *_strdup(char *str)
{
char *cpy;
int i, j;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
;
}

cpy = malloc(i * sizeof(*str) + 1);

if (cpy == NULL)
{
return (NULL);
}

for (j = 0; j < i; j++)
{
cpy[j] = str[j];
}
return (cpy);
}
