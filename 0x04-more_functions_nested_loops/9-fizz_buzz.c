#include <stdio.h>

/**
 * main - entry point check the code
 * Return: void
 */

int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%i",i);
}
if ((i != 100) || (i != 1))
{
printf(" ");
}
}
printf("\n");
}

