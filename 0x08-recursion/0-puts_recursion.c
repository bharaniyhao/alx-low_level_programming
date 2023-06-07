#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a newline using recursion.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
