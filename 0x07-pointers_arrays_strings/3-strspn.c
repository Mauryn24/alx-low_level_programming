#include "main.h"

/**
 * _strspn - returns the length of the initial
 * substring of the string pointed
 * @s: string to be scanned
 * @accept: string containing the characters to match.
 * Return: the number of characters in the initial
 * segment of s which consist only of characters
 * from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;

	while (1)
	{
		a = *s++;

		if (a == c)
			return (s - 1);
		if (a == 0)
			return (NULL);
	}
}
