#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 *@h:head
 *@idx: index
 *@n: n
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t)), *temp;
    unsigned int i = 0;

    if (new == NULL)
        return (NULL);
    new->n = n;
    new->prev = NULL;
    new->next = NULL;
    if (*h == NULL)
    {
        *h = new;
        new->next = NULL;
        return (new);
    }
    temp = *h;
    if (idx == 0)
    {
        return (add_dnodeint(h, n));
    }
    while (i != (idx - 1))
    {
        temp = temp->next;
        i++;
        if (temp == NULL)
        {
            free(new);
            return (NULL);
        }
    }
    new->next = temp->next;
    new->prev = temp;
    if (temp->next == NULL)
        temp->next = new;
    else
    {
        temp->next->prev = new;
        temp->next = new;
    }
    return (new);
}