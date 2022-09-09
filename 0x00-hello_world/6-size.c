#include <stdio.h>
#include <string.h>

/**
 * main- prints with proper grammar, but the outcome is a piece of art
 * Return: 0 if exited properly and non-zero if otherwise
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", (int)sizeof(char));
printf("Size of an int: %i byte(s)\n", (int)sizeof(int));
printf("Size of a long long int: %i byte(s)\n", (int)sizeof(long long int));
printf("Size of a float: %i byte(s)\n", (int)sizeof(float));
fprintf(stderr, "Anything");
return (0);
}
