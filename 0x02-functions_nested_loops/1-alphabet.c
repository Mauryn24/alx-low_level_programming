#include "main.h"

/**
 * print_alphabet - entry point
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
		_putchar(c);
	_putchar('\n');
}
