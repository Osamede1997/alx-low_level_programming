#include <stdio.h>
#include <string.h>

/**
 * main- prints with proper grammar, but the outcome is a piece of art
 * Return: 0 if exited properly and non-zero if otherwise
 */
int main(void)
{
printf("Size of a char: %ibyte(s)\n", (int)sizeof(char));
printf("Size of an int: %ibyte(s)\n", (int)sizeof(int));
printf("Size of a long long int: %ibyte(s)\n", (int)sizeof(long long int));
printf("Size of a float: %ibyte(s)\n", (int)sizeof(float));
return (0);
}
