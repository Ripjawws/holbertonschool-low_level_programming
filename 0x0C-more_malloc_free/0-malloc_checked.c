#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: b
 *Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *bob = 0;

	if (b == 0)
	{
		return (NULL);
	}
	bob = malloc(b);
	if (bob == 0)
	{
		exit(98);
	}
	return (bob);
}
