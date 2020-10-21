#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Entry point
 * Description: searching matched integer in array.
 * @array: array of integer
 * @size: size of array
 * @cmp: function pointer to another function.
 *
 * Return: return index of the first element which matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}
	return (-1);

}
