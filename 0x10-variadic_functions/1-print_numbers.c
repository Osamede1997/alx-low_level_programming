#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @n: no of ints
 * @...: A variable number of strings to be printed
 * @separator: The string to be printed between strings
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{

va_list next_var;
unsigned int i;

va_start(next_var, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(next_var, int));

if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

printf("\n");
 
va_end(next_var);

}
