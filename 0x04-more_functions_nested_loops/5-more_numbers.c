#include "main.h"

/**
 * more_numbers - print numbers *10 times
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = '0'; b <= '14'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
