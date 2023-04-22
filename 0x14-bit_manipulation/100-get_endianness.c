#include "main.h"

/**
 * Write a function that checks the endianness
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int k;
	char *y;

	k = 1;
	y = (char *)&k;
	return (*y);
}
