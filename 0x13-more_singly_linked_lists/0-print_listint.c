#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t r = 0;
	const listint_t *temp;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		printf("%d\n", temp->n);
		r++;
	}
	return (r);
}
