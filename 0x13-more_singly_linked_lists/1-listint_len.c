#include "lists.h"

/**
 * Write a function that returns the number of elements in a linked listint_t list
 * this function calculates linked listint and returns number of elements
 */

size_t listint_len(const listint_t *h)
{
	int x;

	for (x = 0; h; h = (*h).next, x++)
		;

	return (x);
}
