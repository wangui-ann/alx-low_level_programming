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

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
