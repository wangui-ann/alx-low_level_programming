#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: pointer to a name
 * @size: size of the array
 * @action: function parameter
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++
	}
}
