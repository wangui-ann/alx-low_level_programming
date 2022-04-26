#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring from a string
 * @needle: this is the substring
 * @haystack: this is the string
 * Return: returns a pointer to the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *ret = strstr(haystack, needle);

	return (ret);
}
