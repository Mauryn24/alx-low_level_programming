#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest: string to be copied
 * @src: string to copy
 * @n: number of strings to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int g;

	for (g = 0; g < n && src[g] != '\0'; g++)
		dest[g] = src[g];
	while (g < n)
	{
		dest[g] = '\0';
		g++;
	}
	return (dest);
}
