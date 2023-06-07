#include "main.h"
#include <stdio.h>

/**
 * is_prime_number_recursive - checks if a number is prime recursively
 * @n: number to check
 * @i: divisor
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number_recursive(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer is a prime number, otherwise return 0
 * @n: input
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else
		return (is_prime_number_recursive(n, 5));
}

/**
 * is_prime_number_recursive - checks if a number is prime recursively
 * @n: number to check
 * @i: divisor
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number_recursive(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0 || n % (i + 2) == 0)
		return (0);
	else
		return (is_prime_number_recursive(n, i + 6));
}
