#include "lists.h"
/**
* print_dlistint - prints the elements of a list
* @h: doubly linked lists
* Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}
	return (j);
}
