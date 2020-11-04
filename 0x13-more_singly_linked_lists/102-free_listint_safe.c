#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Entry point
 * Description: free all nodes
 * @h: pointer to pointer to a struct
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
