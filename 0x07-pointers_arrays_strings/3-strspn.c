#include "main.h"
#include <string.h>

/**
 * _strspn - calculates length of initial segment
 * @s: string to be scanned
 * @accept: contains characters
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	char len;

	len = strspn(*s, accept);

	return (len);
}
