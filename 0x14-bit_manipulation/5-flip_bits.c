#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*This will result in a number that has a 1 in every*/
	/*bit position where n and m have different bits,*/
	 /*and 0 where they have the same bits*/
	unsigned long int i = n ^ m;
	unsigned int  count = 0;

	while (i > 0)
	{
		count++;
		/*This will clear the least significant 1-bit*/
		/*in i and set all the lower bits to 1.*/
		i &= (i - 1);
	}
	return (count);
}
