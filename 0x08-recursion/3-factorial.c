#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of number
 * @n: number to return to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 )
		return(1);
	return (n * factorial(n - 1));
}
