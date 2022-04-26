#include "main.h"
#include <string.h>

/**
 * _strprk - locates the first occurence of a character
 * @s: this is the string to be scanned
 * @accept: this is the source character
 * Return: returns to dest
 */

char *_strpbrk(char *s, char *accept)
{
	char *ret = strpbrk(s, accept);

	return (ret);
}
