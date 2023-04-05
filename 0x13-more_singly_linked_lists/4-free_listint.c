#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that frees a listint_t list
 * this function frees the elements at the beginning of the list
 */

void free_listint(listint_t *head)
{
	listint_t *catch;

	while (head)
	{
		catch = head;
		head = (*head).next;
		free(catch);
	}
}
