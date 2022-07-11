#include "main.h"

/**
 * print_rev -  prints a string, in reverse,
 * followed by a new line.
 * @s: string to print in reverse
 * Return: 0.
 */

void print_rev(char *s)
{
	int g;

	/* iterate to find length of string and point to last character */
	for (g = 0; s[g] != '\0'; g++)
		;

	/* print string reversed */
	for (g--; g >= 0; g--)
		_putchar(s[g]);

	_putchar('\n');
}
