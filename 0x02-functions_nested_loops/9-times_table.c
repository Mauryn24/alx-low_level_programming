#include "main.h"

/**
 * times_table - prints multiplication table
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			int a = i * j;

			_putchar(',');
			_putchar(' ');
			(a <= 9) ?
			_putchar(' ') :
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
		}
		_putchar('\n');
	}
}
