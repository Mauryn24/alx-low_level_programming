#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n:  number of times the character
 * _ should be printed
 */
void print_line(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
			_putchar('_');
	}

	_putchar('\n');
}
