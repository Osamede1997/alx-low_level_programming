#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints out the alphabet
 * 
 * return: code returns 0 always for success
 */
int main(void)
{
int n;
for (n = 0; n < 10; ++n)
{
putchar(n);
putchar(',');
putchar(' ');
}
return (0);
}
