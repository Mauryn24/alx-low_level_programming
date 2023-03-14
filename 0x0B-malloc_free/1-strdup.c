#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplicate_str;
	int len = 0, i = 0;

	/*check if input string is NULL*/
	if (str == NULL)
		return (NULL);
	/*determine length of input string*/
	while (*(str + i))
		len++, i++;
	len++;
	duplicate_str = (char *)malloc(sizeof(char) * len);

	/*check if memory is allocated*/
	if (duplicate_str == NULL)
		return (NULL);
	/*copying the input string to allocated memory*/
	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}
	/*return the copied string*/
	return (duplicate_str);
}
