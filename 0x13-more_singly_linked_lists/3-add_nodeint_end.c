#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Write a function that adds a new node at the end of a listint_t list
 * this function adds a node at the end of the list
 * end of list is also called tail
 * return address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;

	if (head && !*head)
	{
		*head = new;
		return (new);
	}

	for (last = *head; (*last).next; last = (*last).next);

	(*last).next = new;

	return (new);
}
