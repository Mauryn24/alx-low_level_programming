#include "main.h"

/**
 * main -  prints all arguments it receives
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int h = 0;

	for (h = 0; h < argc; h++)
	{
		printf("arg[%d] = %s\n", h, argv[h]);
	}
	return (0);
}
