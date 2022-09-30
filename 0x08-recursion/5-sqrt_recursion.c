#include "main.h"

int sqrt (int n, int i);

/**
 * _sqrt_recursion - returns natural square root
 * @n: int to calculate square root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (sqrt(n, 0);
}

/**
 * sqrt- finds square root of number
 * @n: number to find square root
 * @i: iterator
 * Return: square root
 */

int sqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (sqrt(n, i + 1));
}
