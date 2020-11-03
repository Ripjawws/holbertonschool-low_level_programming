#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - remove head node
 *@head:  head element
 *Return: address of new element
 */
int pop_listint(listint_t **head)
{
	int datos;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	datos = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (datos);
}
