#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: char to be checked
 * Return: 1 if letter is uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
