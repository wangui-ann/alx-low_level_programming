#include "main.h"
#include <string.h>

/**
 * _memcpy - copies the memory area
 * @n: unsigned character
 * @src: the source
 * @dest: the destination memory
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
