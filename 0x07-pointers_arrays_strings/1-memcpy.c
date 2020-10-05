#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies memory
 * @dest: destination string
 * @src: source string
 * @n: unsigned integer
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
