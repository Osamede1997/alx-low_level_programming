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
if ((x != 'q') && (x != 'e'))
{
putchar(x);
}
}
putchar('\n');
return (0);
}
