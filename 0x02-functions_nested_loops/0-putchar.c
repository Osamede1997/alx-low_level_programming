#include "main.h"

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */

int main(void)
{
int i = 0;
char p[8] = "_putchar";
while (i < 8)
{
_putchar(p[i]);
i++;
}
_putchar('\n');
return (0);
}
