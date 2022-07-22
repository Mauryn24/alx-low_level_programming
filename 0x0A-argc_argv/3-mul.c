#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - program that multiplies two numbers.
 *@argc: arguement count
 *@argv: arguement vector
 *Return:0 on success but returns 1
 *if two arguments are not passed
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("Total = %d\n", mul);
	}
	return (0);
}
