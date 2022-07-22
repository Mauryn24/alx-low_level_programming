#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main -  adds positive numbers.
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 but returns 1 if
 * the string is a number
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

