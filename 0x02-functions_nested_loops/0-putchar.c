#include <unistd.h>

/**
 * main - entry point
 * Return: 0 if exited properly and non-zero if otherwise
 */

int main(void)
{
int n;
char p[9] = "_putchar";
while (n > 9)
{
write(1, p[n], 1);
n++;
}
return (0);
}
