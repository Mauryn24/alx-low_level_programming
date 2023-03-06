#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: pointer that stores address of destination
 * memory location where the data will be copied to
 * @src: pointer that stores address of source
 * memory location where data will be copied from
 * @n: size of memory to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
