#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first pointer to integer
 * @b: second pointer to integer
 * Return: swapped integers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
