#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that computes addition
 * @a: int
 * @b: int
 * return: int sum
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - function that computes subtreaction
 * @a: int
 * @b: int
 * return: int sub
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - function that computes multiplication
 * @a: int
 * @b: int
 * return: int mul
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - function that computes addition
 * @a: int
 * @b: int
 * return: int div
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - function that computes modulation
 * @a: int
 * @b: int
 * return: int mod
 */

int op_mod(int a, int b)
{
return (a % b);
}
