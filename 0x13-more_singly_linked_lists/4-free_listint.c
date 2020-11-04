#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Entry point
 * Description: free list_t
 * @head: first node
 * Return: new node
 */
void free_listint(listint_t *head)
{
	listint_t *cons = NULL;

	while (head != NULL)
	{
		cons = head;
		head = head->next;
		free(cons);
	}
}
