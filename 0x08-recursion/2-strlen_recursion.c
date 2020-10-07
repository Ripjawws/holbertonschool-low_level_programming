#include "holberton.h"

/**
 * _strlen_recursion - Entry point
 * Description: use recursion to return length of string
 * @s: string that need to be printed
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
	return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
