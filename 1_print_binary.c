#include "main.h"

/**
 * Write a function that prints the binary representation of a number
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if b is NULL or contains non-binary digits.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int dec_val = 0;
    int i;

    if (!b)
        return (0);

    for (i = 0; b[i]; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        dec_val = (dec_val << 1) + (b[i] - '0');
    }

    return (dec_val);
}

