#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{

	int **arr;
	int i = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));

	if (arr == 0)
	{
		return (NULL);
	}

	for (i=0; i < height; i++)

	{
	arr[i] = malloc(width * sizeof(int));
	}

	return (arr);

}
