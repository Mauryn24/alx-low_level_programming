#include "main.h"

/**
 * print_last_digit - prints last digigit of a number
 * @a: character to be checked
 * Return: the last digit
 */

int print_last_digit(int a)
{
	int n;

	n = a % 10;

	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}
