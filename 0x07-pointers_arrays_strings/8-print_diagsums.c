#include "main.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int row, column;
	int c, d;

	for (row = 0; row < size; row++)
	{
		column = (row * size) + row;
		c += a[column];
	}
	for (row = 1; row <= size; row++)
	{
		column = (row * size) - row;
		d += a[column];
	}
	printf("%d %d\n", c, d);
}
