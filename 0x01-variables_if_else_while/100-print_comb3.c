#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */
int main(void)
{
int n;
int e;
int b;


e = n/10 + '0';
b = n%10 + '0';
for (n = 0; n <= 89; n++)
{

    
putchar(e);
putchar(b);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
