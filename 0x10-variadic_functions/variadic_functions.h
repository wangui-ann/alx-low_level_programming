#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/**
 * File: VARIADIC_FUNCTIONS
 * Author: wangui-ann
 * Description: header files that contains all functions of the program
 */

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
