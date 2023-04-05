#include "lists.h"
#include <stdlib.h>
/**
 *Write a function that frees a listint_t list
 *this functions frees doubly linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *catch;

	while (head && *head)
	{
		catch = *head;
		*head = (**head).next;
		free(catch);
	}
}
