#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: character to check
 * Return: 1 0n success and 0 0n fail
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
