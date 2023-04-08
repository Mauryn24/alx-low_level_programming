#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a binary string
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int var, power;
	int len;

	if (b == NULL)
		return (0);
	/*iterate thru binary string*/
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	/*iterate thru loop in reverse*/
	/*conversion occurs here that is var**2 and addition*/
	for (power = 1, var = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			var += power;
	}
	return (var)
}
