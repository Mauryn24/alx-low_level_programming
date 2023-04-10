#include "main.h"

/**
 * get_endianness - checks endianess
 * Return: 0 if big endian, 1 if  little endian
 */

int get_endianness(void)
{
	/* Endianness refers to the order in which*/
	/*the bytes of a multi-byte value are stored in memory.*/
	int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);
	return (0);
}
