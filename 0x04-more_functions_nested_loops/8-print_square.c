#include "main.h"

/**
 * print_square - prints a square,
 * followed by a new line.
 *@size: the size of square to be printed.
 */

void print_square(int size)
{
	int k, u;

	if (size > 0)
	{
		for (k = 0; k < size; k++)
		{
			for (u = 0; u < size; u++)
			_putchar('#');

			if (k == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
