#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: binary number being passed
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	/*Declare an unsigned integer*/
	/*variable 'r' without initializing it*/
	unsigned int r;
	/*Declare and initialize two*/
	/*integer variables 'd' and 'e' to 0*/
	int d = 0, e = 0;

	/*Check if the input string is NULL*/
	/*or the first character is not '0' or '1'*/
	if (b == NULL || (*b != '0' && *b != '1'))
		/*If true, return 0*/
		return (0);
	/*Loop through the input string until a null terminator is reached*/
	for (d = 0; b[d] != '\0'; d++)
		/*Empty loop body to simply iterate through the string*/
		;
	/*Decrement 'd' to point to the last non-null character of the input string*/
	d--;
	/* While loop to process the binary digits from right to left*/
	while (d >= 0)
	{
		/*Check if the current character is not '0' or '1'*/
		if (b[d] != '0' && b[d] != '1')
			/*If true, return 0*/
			return (0);
		/*Add the binary digit multiplied by 2^e*/
		/*to the unsigned integer variable 'r'*/
		r = r + (b[d] - '0' * (1 << e));
		/*Decrement 'd' to process the next binary digit*/
		d--;
		/*Increment 'e' to calculate the next power of 2*/
		e++;
	}
	/*Return the unsigned integer value*/
	return (r);
}
