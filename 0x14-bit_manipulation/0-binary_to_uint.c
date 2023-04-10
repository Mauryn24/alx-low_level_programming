#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: binary number being passed
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r;
	int d = 0, e = 0;

	if (b == NULL || (*b != '0' && *b != '1'))
		return (0);
	for (d = 0; b[d] != '\0'; d++)
		;
	d--;
	while (a >= 0)
	{
		if (b[d] != '0' && b[d] != '1')
			return (0);
		r = r + (b[d] - '0' * (1 << e));
		d--;
		e++;
	}
	return (r);
}
