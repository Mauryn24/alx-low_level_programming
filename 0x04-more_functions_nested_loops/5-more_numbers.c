#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int g, q;

	for (g = 0; g <= 9; g++)
	{
		for (q = 0; q <= 14; q++)
		{
			if (q > 9)
				_putchar((q / 10) + '0');
			_putchar((q % 10) + '0');
		}
		_putchar('\n');
	}
}
