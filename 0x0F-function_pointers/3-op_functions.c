#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of 2 numbers
 * @a: first no
 * @b: second no
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: first no
 * @b: second no
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: first no
 * @b: second no
 * Return: quotient
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - Returns the division of two numbers.
 * @a: first no
 * @b: second no
 * Return: remainder of the division
 */



int op_mod(int a, int b)
{
	return (a % b);
}
