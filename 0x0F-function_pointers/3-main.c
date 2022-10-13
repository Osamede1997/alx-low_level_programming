#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*f)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (argv[2][1])
{
printf("Error\n");
exit(99);
}

f = get_op_func(argv[2]);

if (f == NULL)
{
printf("Error\n");
exit(99);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

printf("%d\n", f(num1, num2));
return (0);
}
