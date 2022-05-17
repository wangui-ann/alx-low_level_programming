#ifndef ALX
#define ALX

/**
 * File - ALX
 * Author: wangui-ann
 * Description: this is the mean header file;
 * it contains all declarations of functions.
 */

#include <stdlib.h>

int _putchar(char c);

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
