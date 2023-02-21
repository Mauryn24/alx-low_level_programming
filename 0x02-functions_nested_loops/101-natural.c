#include <stdio.h>

/**
 * main - prints the multiples
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int z = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			z += n;
		}
	}
	printf("%d\n", z);
	return (0);
}
