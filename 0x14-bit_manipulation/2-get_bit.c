#include "main.h"
#include <stdio.h>
/**
 * Write a function that returns the value of a bit at a given index.
 * get_bit - returns value of bit at index
 * @n: input number
 * @index: index of bit
 * Return: Value of bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
