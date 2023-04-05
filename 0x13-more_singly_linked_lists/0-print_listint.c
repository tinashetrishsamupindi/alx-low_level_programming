#include "lists.h"
/**
 * author tinashetrishsamupindi
 * Write a function that prints all the elements of a listint_t list.
 * this function prints the list of integers and it returns the elements
*/

size_t print_listint(const listint_t *h)
{
	int b;
	for( b = 0; h; h = (*h).next, b++)
		printf("%d/n, (*h).n);
	return (b);
}
