#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
        /*i - iterates through the binary string*/
        /*a - holds unsigned int value*/
        unsigned int i = 0, a;

        if (b == NULL)
                return (0);
        /*iterate through binary string pointed by b*/
        while (b[i])
        {
                if (!(b[i] == '0' || b[i] == '1'))
                        return (0);
                a <<= 1;
                if (b[i] == '1')
                        a += 1;
                i++;
        }
        return (a);
}
