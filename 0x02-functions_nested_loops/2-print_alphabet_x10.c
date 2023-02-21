#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
