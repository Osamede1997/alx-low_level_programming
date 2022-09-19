#include "main.h"

/**
 * puts_half - print half a string
 * @str: parameter tested
 * Return: void
 */

void puts_half(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
for (i = (i + 1) / 2; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
