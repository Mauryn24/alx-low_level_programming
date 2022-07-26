#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - duplicates the given string
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		len++, i++;
	len++;
	duplicate_str = (char *)malloc(sizeof(char) * len);

	if (duplicate_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}
	return (duplicate_str);
}
