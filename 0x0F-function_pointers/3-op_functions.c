#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum of two integers
 * @a: integer a
 * @b: integer b
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a: integer a
 * @b: integer b
 * Return: differenc
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: integer a
 * @b: integer b
 * Return: multiply
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a: integer a
 * @b: integer b
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modul of two integers
 * @a: integer a
 * @b: integer b
 * Return: modul
 */

int op_mod(int a, int b)
{
	return (a % b);
}
