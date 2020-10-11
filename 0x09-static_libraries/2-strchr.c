#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: character
 * @c: character
 * Return: a pointer to the first occurrence of the character c in string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)

{
	do {

		if (*s == c)
			return (s);
	}
while (*s++);

	return (NULL);
}
