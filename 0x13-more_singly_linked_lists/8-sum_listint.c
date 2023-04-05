#include "lists.h"

/**
 * Write a function that returns the sum of all the data (n) of a listint_t linked list.
 * this function adds data of listint_t linked list
 *  Return: sum of all the data (n) values and if list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; head = (*head).next)
		sum = sum + (*head).n;

	return (sum)

}
