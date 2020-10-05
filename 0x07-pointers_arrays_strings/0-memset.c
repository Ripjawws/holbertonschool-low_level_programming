#include "holberton.h"

/**
 * _memset - fill with constant byte
 * @char *s: memory
 * @b: with what to fill
 * @unsignedintn: value of how many
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
