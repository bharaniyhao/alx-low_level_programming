#include "main.h"
#include <stdio.h>

int helper(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of @n, or -1 if @n does not have a natural
 *         square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper(n, 1));
}

/**
 * helper - Recursively searches for the square root of @n starting at @i.
 * @n: The number to calculate the square root of.
 * @i: The starting point for the square root calculation.
 *
 * Return: The natural square root of @n if it exists, or -1 if it does not.
 */
int helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (helper(n, i + 1));
}
