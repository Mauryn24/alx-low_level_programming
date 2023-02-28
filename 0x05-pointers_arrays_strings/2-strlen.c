#include "main.h"

/**
 * _strlen - return length
 * @s: pointer to char
 * to be checked
 * Return: length of the char
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		return (i);
}
