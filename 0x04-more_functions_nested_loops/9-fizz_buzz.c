#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
int i;
i = 1;
while (i < 101)
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
printf("%i", i);
}
if ((i != 100) || (i != 1))
{
printf(" ");
}
i++;
}
printf("\n");
return (0);
}

