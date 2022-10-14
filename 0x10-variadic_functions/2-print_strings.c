#include "variadic_functions.h"

/**
 * print_strings- Prints strings, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{

va_list next_var;
unsigned int i;
char *word;

va_start(next_var, n);

for (i = 0; i < n; i++)
{

word = va_arg(next_var, char *);

if (word == NULL)
{
printf("nil");
}
else
{
printf("%s", word);
}

if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

printf("\n");
 
va_end(next_var);

}
