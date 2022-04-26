#include "main.h"
#include <string.h>

/**
 * _memset - main function for setting the memory
 * @s: this is the pointer
 * @b: this is the character
 * @n: this is the unsigned character
 * Return: return the memory of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
