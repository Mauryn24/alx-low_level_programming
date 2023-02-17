#include <stdio.h>
/**
 * main - prints alphabets in lowercase then uppercase
 * Return: 0 on success
 */
int main(void)
{
	char a, b;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	for (b = 65; b < 91; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
