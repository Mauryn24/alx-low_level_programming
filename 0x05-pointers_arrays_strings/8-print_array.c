#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array
 * @n: number of elements
 * Return:  0.
 */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		if (y != (n - 1))
			printf("%d, ", a[y]);
		else
			printf("%d", a[y]);
	}
	printf("\n");
}
