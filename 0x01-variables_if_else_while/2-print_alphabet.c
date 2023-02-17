#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * Return: 0 on success
 */
int main(void)
{
	char a;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
