#include "main.h"

/**
 * set_bit - sets the value of a bit
 * to 1 at a given index.
 * @n: address of n
 * @index: position
 * Return: 1 on success or -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
