#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */

int main(void)
{
char x;
for (x = '0'; x <= '9'; ++x)
{
putchar(x);
}
for (x = 'a'; x <= 'f'; ++x)
{
putchar(x);
}
putchar('\n');
return (0);
}
