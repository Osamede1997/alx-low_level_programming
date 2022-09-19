#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: parameter tested
 * Return: void
 */

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = (i = i; s[i]; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
