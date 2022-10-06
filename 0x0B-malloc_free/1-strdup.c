#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a space in memory
 * @str: string to be duplicated
 * Return: pointer to string
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

cpy = malloc(sizeof(*str) * (i + 1));

if (cpy == NULL)
{
return (NULL);
}

for (j = 0; j < i; j++)
{
cpy[j] = str[j];
}
cpy[j] = '\0';
return (cpy);
}
