#include <stdio.h>
#include <stdlib.h>

/**
 * main entry point, it compares a random number to 5, 6, 0
 * the return value of the main function is 0 if the code runs 
 * successful, it returns a non zero value if the code 
 * isnt successful
 * Return: 0 if exited properly and non-zero if otherwise
 */

int main(void)
{
char x;
for (x = 'z'; x >= 'a'; --x)
{
putchar(x);
}
putchar('\n');
return (0);
}
