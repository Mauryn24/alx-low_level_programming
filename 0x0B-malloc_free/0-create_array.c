#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character to be filled
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0)
		return (NULL);
	arr = (char*)malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
