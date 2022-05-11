#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: no of arguments
 * @argv: args
 * Return: nothing
 */

int main(int argc, char **argv)
{
	int num1, num2, num3;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
