#include <stdio.h>
/**
 * main - prints alphabets except q and e
 * Return: 0 on success
 */
int main(void)
{
	char a;

	for (a = 97; a < 123; a++)
	{
		if (a == 101 || a == 113)
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
