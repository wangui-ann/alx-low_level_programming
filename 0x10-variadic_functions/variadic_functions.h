#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * File - variadic_functions.h
 * Author: Brennan D Baraban
 * Description: header files that contains all functions of the program
 */

#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer
 * @symbol: Represents a data type
 * @print: prints a datatype
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
