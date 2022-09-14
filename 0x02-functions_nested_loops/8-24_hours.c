#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints out every minute of the day
 * return - no return value
 */


void jack_bauer(void)
{
int i;
int n;

for (i = 0; i < 24; i++)
{
for (n = 0; n < 60; n++)
{
printf("%i%i:%i%i\n", i / 10, i % 10, n / 10, n % 10);
}
}
return;
}
