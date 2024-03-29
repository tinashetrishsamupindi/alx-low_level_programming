#include "main.h"

/**
 * Write a function that returns the value of a bit at a given index.
 * get_bit - returns the value of a bit at a given index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int bit_val;

    if (index > 63)
        return (-1);

    bit_val = (n >> index) & 1;

    return (bit_val);
}

