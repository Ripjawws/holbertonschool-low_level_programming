#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - Entry point
 * Description: concatenate a string from source to destination.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes will be concat.
 *
 * Return: dest.
 */

	char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;
	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest [l + i] = src[i];
	}
	return (dest);
}

/**
 * string_nconcat - Entry Point
 * @s1: first string.
 * @s2: second string.
 * @n: spaces from s2 needed to allocate
 *
 * Return: nothing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *bob;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++);
	{
	}
	for (j = 0; s2[j] != '\0'; j++);
	{
	}
	if (n >= j)
	{
		bob = malloc(((i + j) + 1) * sizeof(char));
		_strncat(bob, s1, i);
		_strncat(bob, s2, j);
		return (bob);
	}
	else
	{
		bob = malloc(((i + j) + 1) * sizeof(char));
		_strncat(bob, s1, i);
		_strncat(bob, s2, n);
		return(bob);
	}
}
