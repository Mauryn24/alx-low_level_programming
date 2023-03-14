#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character used to initialize elements
 * Return: pointer to array on success
 * or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
		exit(0);
	else
	{
		for (i = 0; i < size; i++)
			*(ptr + i) = c;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
