#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */

int main(void)
{
char x;
for (x = 'a'; x <= 'z'; ++x)
{
putchar(x);
}
for (x = 'A'; x <= 'Z'; ++x)
{
putchar(x);
}
putchar('\n');
return (0);
}
