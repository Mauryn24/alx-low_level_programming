#include "main.h"

/**
 * clear_bit - sets the value of a
 * bit to 0 at a given index.
 * @n: address
 * @index: position
 * Return: 1 0n success, -1 0n fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	/*This effectively sets the bit at the specified*/
	/*index to 0, while leaving all other bits unchanged.*/
	*n &= ~(1 << index);
	return (1);
}
