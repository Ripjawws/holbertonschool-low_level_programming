#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *p;

p = malloc (strlen (str) + 1);
	if (p != NULL)
	{
	strcpy (p,str);
	return (p);
	}

	return (NULL);
}
