#include <stdio.h>

/**
 * main - print numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int ch;

	for (n = 20; n < 30; n++)
	{
		putchar(n);
	}

	for (ch = 'a'; ch < 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
