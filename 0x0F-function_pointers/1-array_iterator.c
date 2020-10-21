#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an array
 * @array: the integer to print
 * @size: size
 * @action: what its doing
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0 || array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
