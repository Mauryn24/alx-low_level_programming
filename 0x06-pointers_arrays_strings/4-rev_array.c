#include "main.h"

/**
 *  reverse_array -  reverses the content of an array of integers.
 *  @a: array
 *  @n: number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int t, b = 0;
	int end = n - 1;

	while (b < end)
	{
		t = *(a + b);
		*(a + b) = *(a + end);
		*(a + end) = t;
		b++, end--;
	}
}
