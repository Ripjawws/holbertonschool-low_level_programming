#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@size: size
 *@c: char
 *Return: s
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc((size) * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
