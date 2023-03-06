#include "main.h"

/**
 * _memset - used to fill a block of memory
 * with a particular value
 * @s: starting address of the memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
