#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that inserts a new node at a given position
 * this function inserts a new node at a given position
 * @idx is the index where the new node shold be inserted
 * @n: value for n
 * Return: the address of new node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new, *catch = *head;
	unsigned int i = 0;

	if (!index)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		(*new).n = n;
		(*new).next = *head;

		*head = new;

		return (*head);
	}

	while (catch)
	{
		if (i == (index - 1))
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			(*new).n = n;
			(*new).next = (*catch).next;
			(*catch).next = new;
			return (new);
		}
		catch = (*catch).next;
		i++;
	}
	return (NULL);
}
