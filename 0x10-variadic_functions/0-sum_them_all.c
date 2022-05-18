#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: amount of arguments
 * Return: the sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, i);

	for (i = 0; i < sum; i++)
		sum += va_arg(nums, int);
	va_end(args);
	return (sum);
	if (n == 0)
		return (0);
}
