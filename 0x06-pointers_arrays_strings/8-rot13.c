#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: character
 * Return: string in rot13
 */
char *rot13(char *str)
{
	int i, j, k;
	char str[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == str[j])
			{
				k = (j + 26) % 52;
				*(s + i) = str[k];
				j = 52;
			}
		}
	}
	return (s);
}
