#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to check
 * Return: 1 0n success and 0 on failure
 */

int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
		return (1);
	else
		return (0);
}
