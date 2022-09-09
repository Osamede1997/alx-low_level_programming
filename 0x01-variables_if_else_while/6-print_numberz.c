#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */

int main(void)
{
int n;
for (n = '0'; n < 10; ++n)
{
putchar(n);
}
putchar('\n');
return (0);
}
