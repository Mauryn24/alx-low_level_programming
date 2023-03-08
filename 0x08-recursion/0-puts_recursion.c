#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /*base case*/
	{
		puts("");/*prints a new line*/
		return;
	}
	putchar(*s);/*prints a new character*/
	_puts_recursion(s + 1);
	/*recursive call that prints _puts_recursions with next char*/
}
