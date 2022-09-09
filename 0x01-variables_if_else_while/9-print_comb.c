#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints out the alphabet
 * 
 * return: code returns 0 always for success
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
