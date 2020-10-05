#include "holberton.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: character
 * @accept: character string
 *
 * Return: returns number of bytes in the initial segment s which consist
 *of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count;

	count = 0;
	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}

			if (accept[i + 1] == '\0')
			{
				return (count);
			}

		}
		s++;
	}
	return (count);
}
