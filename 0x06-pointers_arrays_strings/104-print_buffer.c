#include "main.h"
#include <stdio.h>

/**
 * print_buffer -  prints a buffer.
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int y, h, f;

	y = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (y < size)
	{
		h = size - y < 10 ? size - y : 10;
		printf("%08x: ", y);
		for (f = 0; f < 10; f++)
		{
			if (f < h)
				printf("%02x", *(b + y + f));
			else
				printf(" ");
			if (f % 2)
			{
				printf(" ");
			}
		}
		for (f = 0; f < h; f++)
		{
			int c = *(b + y + f);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		y += 10;
	}
}
