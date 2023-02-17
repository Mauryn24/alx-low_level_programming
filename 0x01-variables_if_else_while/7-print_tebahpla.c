#include <stdio.h>
/**
 * main - prints alphabets in reverse
 * Return: 0 on success
 */
int main(void)
{
	char a;

	for (a = 122; a >= 97;  a--)
		putchar(a);
	putchar('\n');
	return (0);
}
