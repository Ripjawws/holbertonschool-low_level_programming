#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Entry Point
 * Description: return a array of interger from min to max
 * @min: minimum number.
 * @max: maximum number
 * Return: nothing
 */
int *array_range(int min, int max)
{
	int *new;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	new = malloc((max - min + 1) * sizeof(int));
	if (new == 0)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		new[i] = min;
		min++;
		i++;
	}
	return (new);
}
