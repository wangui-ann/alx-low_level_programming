#include "main.h"

/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: this is the pointer of the string
 * Return: void
 */

void print_rev(char *s)
{
	
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
