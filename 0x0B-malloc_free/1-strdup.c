#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - a pointer to newly allocated space in memory with a copy of string
 *@str: string
 *Return: s
 */

char *_strdup(char *str)
{
	int len1 = 0;
	int len2 = 0;
	char *p;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[len1] != 0)
	{
		len1++;
	}

	p = (char *)malloc(len1 + 1 * sizeof(char));

	if (p == 0)
	{

	return (NULL);

	}

	for (len2 = 0; len2 < len1; len2++)

	{
		p[len2] = str[len2];
         }
	return (p);
}
