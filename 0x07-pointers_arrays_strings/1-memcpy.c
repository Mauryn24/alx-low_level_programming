#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination array where content will be copied
 * @src: source of data to be copied
 * @n: bytes to be copied
 * Return:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}
	return (dest);
}
