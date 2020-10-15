#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Entry Point
 * @nmemb: number of element(s) in array
 * @size: size of each element.
 *
 * Return: a pointer to array of zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *l1 = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	l1 = malloc(nmemb * size);
		    if (l1 == 0)
		    {
			    return (NULL);
		    }
		    while (i < nmemb * size)
		    {
			    l1[i] = '\0';
			    i++;
		    }
		    return (l1);
}
