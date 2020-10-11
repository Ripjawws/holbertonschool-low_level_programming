#include "holberton.h"
/**
 * _strstr - this function locates a substring
 * @haystack:character string
 * @needle:character string
 * Return: a pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = i, j = 0; needle[j] != '\0'; j++, k++)
		{
			if (needle[j] != haystack[k] || haystack[k] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
