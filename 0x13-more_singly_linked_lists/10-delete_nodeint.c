#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that deletes the node at index index of a listint_t linked list
 * this function deletes the node at any given position
 * @index: index to be deleted
 * Return: 1 for success -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *catch, *delete;
	unsigned int i, action = 0;

	if (!*head)
		return (-1);
	for (i = 0, catch = *head; catch && index; i++, catch = (*catch).next)
		if (i == (index - 1))
		{
			action = 1;
			break;
		}

	if (action)
	{
		delete = (*catch).next;
		(*catch).next = (*delete).next;
		free(delete);
		return (1);
	}
	else if (!index && (**head).next)
	{
		delete = *head;
		*head = (*delete).next;
		free(delete);
		return (1);
	}
	else if (!index && *head)
	{
		*head = NULL;
		free(*head);
		return (1);
	}
	return (-1);
}
