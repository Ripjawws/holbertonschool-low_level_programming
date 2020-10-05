#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	do
	{
	if (*s == c)
       	return (s);
	}
	while (*s++);
return (NULL);
}
