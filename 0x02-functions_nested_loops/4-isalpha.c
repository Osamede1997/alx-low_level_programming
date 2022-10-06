#include "main.h"

/**
 * _isalpha - check if alphabet is uppercase or lowercase
 * @c : character to check the case
 * Return: always 0
 */

int _isalpha(int c)
{
if ((c >= 65  && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
