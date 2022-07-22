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

	while (h < argc)
		printf("%s\n", argv[h++]);
	return (0);
}
