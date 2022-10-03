#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */


int main(int argc, char *argv[])
{
int a, b;
(void)argc;
if (argc - 1 != 2)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%i\n", a * b);
return (0);
}
