#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints exactly "and that piece of art is useful"
 *  - Dora Korpar, 2015-10-19,
 * followed by a new line to the standard error
 * Return: always 1 (success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59)
	return (1);
}
