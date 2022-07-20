#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int o = 0;
	int y = 0;

	while (dest[o] != '\0')
		o++;
	while (src[y] != '\0')
	{
		dest[o] = src[y];
		o++;
		y++;
	}
	dest[o] = '\0';
	return (dest);
}
