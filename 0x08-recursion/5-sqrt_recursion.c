#include "main.h"

/**
 * find_root - find square root of n,
 * starting from the smallest possible, 0
 * @n: n
 * @root: test this root
 * Return: natural square root, ot -1 if not natural root
 */

int find_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	else if (root * root == n)
	{
		return (root);
	}
	else
		return (find_root(n, root + 1));
}
/**
 *  _sqrt_recursion -  returns the natural square root of a number.
 *  @n: integer
 *  Return: natural square root of a number,
 *  If n does not have a natural square root,
 *  the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (find_root(n, 0));
}
