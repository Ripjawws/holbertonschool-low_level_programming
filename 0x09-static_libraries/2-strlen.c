#include "holberton.h"

/**
 * _strlen - function to find string lenght
 * @s: pointer s
 * Return: c
 */
int _strlen(char *s)
{
int c = 0;

while (s[c] != '\0')
c++;
return (c);
}
