#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes to append
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int p = 0;
	int h = 0;

	while (dest[p] != '\0')
		p++;

	while (src[h] != src[n])
	{
		dest[p] = src[h];
		p++;
		h++;
	}

	dest[p] = '\0';

	return (dest);
}
