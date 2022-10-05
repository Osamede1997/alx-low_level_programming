#include "main.h"

/**
 * _puts - print a string
 * @s: parameter tested
 * Return: void
 */

void _puts(char *s)
{
int i;
i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
_putchar('\n');
return;
}
