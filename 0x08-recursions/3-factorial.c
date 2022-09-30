#include "main.h"

/**
 * factorial - return length of string
 * @n: int tested
 * Return: facorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
