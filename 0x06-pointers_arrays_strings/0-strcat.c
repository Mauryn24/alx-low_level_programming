#include "main.h"

/**
 * _strcat - concentates a string
 * @dest: destination string
 * @src: source string
 * Return: concentated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	/* concentate source to destination string*/
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	/*terminating the dest string*/
	dest[i] = '\0';

	return (dest);
}
