#include "main.h"

/**
 * main - print_alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	_putchar('\n');
}
