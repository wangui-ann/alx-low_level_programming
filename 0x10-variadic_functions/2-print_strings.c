#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: strring to be printed
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = varg(strings, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("%\n");
	va_end(strings);
}
