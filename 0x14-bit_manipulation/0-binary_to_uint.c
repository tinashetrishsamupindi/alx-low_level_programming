#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        result = (result << 1) | (b[i] - '0');
    }

    return result;
}

