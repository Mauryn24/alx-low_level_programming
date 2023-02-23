#include <stdio.h>

/**
 * main - prints numbers between 0-100,
 * finding their multiples
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else 
			printf("%d", i);
		if (i == 100)
			break;
		else
			printf(" ");
	}
	printf("\n");
	return (0);
}
