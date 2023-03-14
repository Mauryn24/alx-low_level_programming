#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concentated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	/* Check if either string is NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Calculate length of each string*/
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	/* Add space for null terminator*/
	len2++;
	/* Allocate memory for concatenated string*/
	p = malloc(sizeof(char) * (len1 + len2));

	/* Check if memory allocation was successful*/
	if (p == NULL)
		return (NULL);
	/* Copy first string to concatenated string*/
	i = 0, j = 0;
	while (i < len1)
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	/* Copy second string to concatenated string*/
	while (j < len2)
	{
		*(p + i) = *(s2 + j);
		i++, j++;
	}
	/*Return pointer to concatenated string*/
	return (p);
}
