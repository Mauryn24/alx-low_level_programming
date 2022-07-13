#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int r, d;

	for (d = 0; s[d] != '\0'; d++)
	{
		for (r = 0; a[r] != '\0'; r++)
		{
			if (s[d] == a[r])
				s[d] = b[r];
		}
	}
	return (s);
}
