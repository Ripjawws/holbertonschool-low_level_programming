#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: character
 * @c: character
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
