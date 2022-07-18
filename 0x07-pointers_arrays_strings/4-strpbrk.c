#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int b = 0, k;

	while (s[b] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[b] == accept[k])
			{
				s = &s[b];
				return (s);
			}
		}
		b++;
	}
	return (NULL);
}
