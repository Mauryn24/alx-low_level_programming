#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int p, t;

	if (n > 0)
	{
		for (p = 0; p < n; p++)
		{
			for (t = 0; t < p; t++)
				_putchar(' ');
			_putchar('\\');

			if (p == n - 1)

				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
