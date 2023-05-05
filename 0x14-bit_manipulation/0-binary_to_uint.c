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
	unsigned int a = 0 ;
	int length = strlen(b);
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; i < length; i++)
	{
		if (b[length - i - 1] == '1')
			a += pow(2, i);
	}
	return (a);
}
