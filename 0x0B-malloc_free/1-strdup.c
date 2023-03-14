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
	char *p;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	/*determine length of input string*/
	while (str[len])
		len++;

	/*allocating memory for copied string*/
	/*len + 1 accounts for null character*/
	p = (char *) malloc((len + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	/*copy input string to new allocated memory*/
	/*iterate thru a while loop until '\0' is reached*/
	while ((p[i] = str[i]) != '\0')
		i++;
	/*return copied string*/
	return (p);
}
