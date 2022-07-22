#include "main.h"
/**
 * main -  prints all arguments
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc,  char *argv[] __attribute__((unused)))
{

	if (argc > 0)
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
