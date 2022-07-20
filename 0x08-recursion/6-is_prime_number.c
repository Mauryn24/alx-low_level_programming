#include "main.h"

/**
 * is_prime - recursively divide
 * by higher divisor, skip even num
 * @n: number to check if prime
 * @i: current divisor to checker
 * Return: 1 if the input integer is a prime
 * number, otherwise return 0.
 */

int is_prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
		return  (is_prime(n, i + 1));
}
/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int i = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_prime(n, i));
}
