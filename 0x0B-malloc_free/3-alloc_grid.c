#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grind - prints 2D array
 * @width: number of rows
 * @length: number of columns
 * Return: 2D array and 0 on failure
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if ((width == 0) || (height == 0))
		return (NULL);
	arr = malloc(width * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		arr[i] = malloc(height * sizeof(int *));
	return (arr);
}
