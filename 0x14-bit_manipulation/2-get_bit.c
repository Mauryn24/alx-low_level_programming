#include "main.h"

/**
 * get_bit - returns value of bit at a certain index
 * @n: number
 * @index: position
 * Return: value of bit index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*check if the index is longer than maximum number*/
	/*of bits in unsigned long int ie 64 bits*/
	if (index > 64)
		return (-1);
	/*check if bit is 0 ie the bit is at index 0*/
	if (n == 0)
		return (0);
	/*right shift so that the bit we want to retrieve*/
	/*is in the least significant bit position*/
	n = n >> index;
	if ((n & 1) != 0)
		return (1);
	return (0);
}
