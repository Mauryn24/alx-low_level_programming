#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to be scanned
 * @c: character to be searched in s
 * Return: Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if
 * the character is not found
 */

char *_strchr(char *s, char c)
{
	int g = 0;

	while (s[g] != '\0' && s[g] != c)
		g++;
	if (s[g] == c)
		return (&s[g]);
	else
		return (NULL);
}
