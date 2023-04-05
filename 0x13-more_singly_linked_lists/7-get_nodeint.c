#include "lists.h"

/**
 *Write a function that returns the nth node of a listint_t linked list.
 *the index is the index of the node
 *Return: the nth node and if the code does not exist return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;

	for (b = 0; head; b++, head = (*head).next)
		if (b == index)
			return (head);
	return (NULL);
}
