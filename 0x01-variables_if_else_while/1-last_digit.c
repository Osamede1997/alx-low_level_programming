#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main entry point, it compares the
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int a = n % 10;
if (a > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, a);
}
else if (a == 0)
{
printf("Last digit of %i is %i and is 0\n", n, a);
}
else if (a < 6 && a != 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, a);
}
else
{
printf("THANK YOU FOR TRYING!\n");
}
return (0);
}
