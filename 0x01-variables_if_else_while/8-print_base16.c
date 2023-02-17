#include <stdio.h>
/**
 * main - prints base 16 numbers in lowercase
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int ch;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
