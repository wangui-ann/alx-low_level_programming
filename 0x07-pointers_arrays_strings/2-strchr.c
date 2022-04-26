#include "main.h"
#include <string.h>

/**
 * _strchr - returns a pointer to the first occurence of a character
 * @c: this is the character to be searched
 * @s: this is the string
 * Return: c, or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	char *ret = strchr(s, c);

	return (ret);
}
