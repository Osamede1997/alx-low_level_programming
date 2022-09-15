#include <stdio.h>
/**
 * _isupper: checks if a char is uppercase
 * @c: char to be tested
 * Return: returns 1 for success
 */

int _isupper(char c)
{
if (c >= 'A' && c >= 'Z')
{
return (1);
}
else
{
return (0);
}
}
