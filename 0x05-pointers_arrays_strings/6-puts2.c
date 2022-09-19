#include "main.h"

/**
 * _puts2 - print a string
 * @s: parameter tested
 * Return: void
 */

void puts2(char *str)
{
int i;
i = 0;
while (str[i])
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
return;
}
