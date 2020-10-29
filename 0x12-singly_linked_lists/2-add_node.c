#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Entry point
 * Description: print number of element in the linked list
 * @head: first node
 * @str: content of string
 * Return: node.
 */

list_t *add_node(list_t **head, const char *str)
{
	int runner;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	runner = 0;

        while (str[runner] != '\0')
	{
		runner++;
	}
	new->len = runner;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (*head);
}
