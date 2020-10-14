#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns a 2d aray
 *@width: width
 *@height: height
 *Return: array
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
	for (i = 0; i < height; i++)
	{
	arr[i] = malloc(width * sizeof(int));
	if (arr[i] == NULL)
	{
		for (i = i - 1; i >= 0; i--)
		{
			free(arr[i]);
		}
		free(arr);
		return (NULL);
	}
}
	return (arr);
}
