#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that adds a new node at the beginning of a listint_t list
 * this function adds a node at the beginning of a list
 * function returns address of new element or NULL if it fals
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	(*new).n = n;

	(*new).next = *head;

	*head = new;

	return (*head);
}
