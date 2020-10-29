#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	size_t r = 0;
	const list_t *temp;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);

			r++;
		}

	}
	return (r);
}
