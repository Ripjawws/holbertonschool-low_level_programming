#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *p;

	for (p = h; p != NULL; p = p->next)
	{
		i++;
	}
	return (i);
}
