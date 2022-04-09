#include <stdio.h>

/**
 * main - print numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 20; n < 36; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
