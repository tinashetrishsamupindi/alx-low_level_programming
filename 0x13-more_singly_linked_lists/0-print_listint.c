#include "lists.h"

/**
 * Write a function that prints all the elements of a listint_t list
 * this function print integers and return the element
 */

size_t print_listint(const listint_t *h)
{
	int b;

	for (b = 0; h; h = (*h).next, b++)
		printf("%d\n", (*h).n);

	return (b);
}
