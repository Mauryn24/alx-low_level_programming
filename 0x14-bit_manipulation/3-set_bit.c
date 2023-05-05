#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: integer
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);
	/*create a mask with 1 at the index position*/
	/*use bitwise or to set bit to 1*/
	*n |= (1 << index);
	return (1);
}
