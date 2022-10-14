#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all parameters
 * @n: const int
 * Return: return the sum int
 */

int sum_them_all(const unsigned int n, ...)
{

va_list next_var;
unsigned int i, sum;

sum = 0;

if (n == 0)
{
return (0);
}

va_start(next_var, n);

for (i = 0; i < n; i++)
{
sum += va_arg(next_var, int);
}
 
va_end(next_var);

return (sum);

}
