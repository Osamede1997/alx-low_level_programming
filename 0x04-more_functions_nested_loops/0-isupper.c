#include "main.h"
/**
 * _isupper - check if alphabet is uppercase
 *@c : character to check the case
 * Return: Always 0 or 1
 */

int _isupper(int c)
{
if (c >= 'A'  && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
