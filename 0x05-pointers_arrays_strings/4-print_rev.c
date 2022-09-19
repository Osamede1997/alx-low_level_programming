#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: parameter tested
 * Return: void
 */

void print_rev(char *s)
{
int i = 0;
int j;
while (s[i] != '\0')
{
i++;
}
for (j = i; s[i]; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
