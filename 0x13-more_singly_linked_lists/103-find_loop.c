#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Entry point
 * Description: find the loop in linked list
 * @head: pointer to struct
 * Return: address of node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
