#include "main.h"

/**
 * rot13 -  encodes a string using rot13.
 * @s: string to manipulate
 * Return: encoded string
 */

char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		i = 0;
		while (a[i] != '\0' && s[j] != a[i])
			i++;

		if (s[j] == a[i])
			s[j] =b[i];
	}
	return (s);
}
