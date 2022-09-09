#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main- prints with proper grammar, but the outcome is a piece of art
 * Return: 0 if exited properly and non-zero if otherwise
 */
int main(void)
{
char b[] = "and that piece of art is useful\" - Dora Korpar, \2015-10-19\n";
write(1, b , 59);
return (1);
}
