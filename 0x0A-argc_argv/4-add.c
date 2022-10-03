#include <stdio.h>
#include <stdlib.h>

/**
 * isNumber - checks if array element is an int
 * @s: array pointer
 * Return: 0 f0r success
 */


int isNUMBER(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
{
return (1);
}
i++;
}
return (0);
}

/**
 * main - program entry, adds int in command line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */


int main(int argc, char *argv[])
{
int sum = 0;
while(--argc)
{
if (isNUMBER(argv[argc]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[argc]);
}
printf("%i\n", sum);
return (0);
}
