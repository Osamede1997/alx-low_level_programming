#include "main.h"

/**
 * _islower - check if alphabet is lowercase
 * @c : character to check the case
 * Return: Always 0.
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
