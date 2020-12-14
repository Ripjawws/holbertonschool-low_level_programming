#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Return nubmer of elements
 * @h: head element
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
