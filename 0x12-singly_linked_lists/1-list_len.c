#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - print list elements
 *@h: pointer
 * Return: r
 */

size_t list_len(const list_t *h)
{
	size_t r = 0;
	const list_t *temp;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		r++;
	}
	return (r);
}
