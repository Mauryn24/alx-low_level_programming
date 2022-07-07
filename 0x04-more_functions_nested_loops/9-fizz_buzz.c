#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 * Fizz is printed instead of the number, for multiples of five,
 * Buzz, and for multiples of both three and five, FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int v;

	for (v = 1; v <= 100; v++)
	{
		if ((v % 3) == 0 && (v % 5) == 0)
			printf("FizzBuzz");
		else if ((v % 3) == 0)
			printf("Fizz");
		else if ((v % 5) == 0)
			printf("Buzz");
		else
			printf("%d", v);

		if (v == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
