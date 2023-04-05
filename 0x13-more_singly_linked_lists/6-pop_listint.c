#include "lists.h"
#include <stdlib.h>

/**
 * Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n)
 * this function deletes the head node of listint_t linked list
 * the pop function works as that of stack where the last element is popped out in LIFO
 * in this case the head node is deleted
 * Return: deleted value - n
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int n;

	if (head && *head)
	{
		hold = *head;
		n = (**head).n;
		*head = (**head).next;
		free(hold);
		return (n);
	}
	return (0);
}
