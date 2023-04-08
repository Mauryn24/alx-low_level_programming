#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary numbers
 * to unsigned int
 * @b: pointer to a binary string
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, var = 0;

	if (b == NULL)
		return (0);
	/*iterator thru binary string b*/
	while (b[i])
	{
		/*check if char is a valid binary digit*/
		/*that is, it is a 0 or 1*/
		if ((!b[i] == '0' || b[i] == '1'))
			return (0);
		/*shift var to the left by 1*/
		var <<= 1;
		/*this sets rightermost value to 1*/
		if (b[i] == '1')
			var += 1;
		i++;
	}
	/*return the uint*/
	return (var);
}
