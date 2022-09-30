#include "main.h"

int _my_prime(int a, int b);

/**
 * is_prime_number - returns if integer is prime or not
 * @n: int to calculate if prime
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (_my_prime(n, n-1));
}

/**
 * _my_prime- finds if number is prime
 * @a: number to find if prime
 * @b: iterator
 * Return: 1 if prime, 0 if its not prime
 */

int _my_prime(int a, int b)
{
if (b == 1)
{
return (1);
}
if (b % a == 0 && b > 0)
{
return (0);
}
return (_my_prime(a, b - 1));
}
