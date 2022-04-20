#include "main.h"

/**
 * swap_int: swaps the values of two integers
 * @a: this is pointer 1
 * @b: this is pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = *a;
	c = *b;
}
