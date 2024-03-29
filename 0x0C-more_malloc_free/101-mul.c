#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * _print - Move a string one place to the left and print the string
 * @str: String to move
 * @l: Size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int i, j;
	i = j = 0;

	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - Multiplies a char with a string and places the answer into dest
 * @n: Char to multiply
 * @num: String to multiply
 * @num_index: Last non-NULL index of num
 * @dest: Destination of the multiplication
 * @dest_index: Highest index to start addition
 *
 * Return: Pointer to address dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;
	mulrem = addrem = 0;

	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}

	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}

	if (addrem)
		return NULL;

	return dest;
}

/**
 * check_for_digits - Checks the arguments to ensure they are digits
 * @av: Pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return 1;
		}
	}

	return 0;
}

/**
 * init - Initializes a string
 * @str: String to initialize
 * @l: Length of string
 *
 * Return: void
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';

	str[i] = '\0';
}

/**
 * main - Multiply two numbers
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: Zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char error_message[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; error_message[ti]; ti++)
			_putchar(error_message[ti]);

		return 98;
	}

	for (l1 = 0; argv[1][l1]; l1++)
		;

	for (l2 = 0; argv[2][l2]; l2++)
		;

	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));

	if (a == NULL)
	{
		for (ti = 0; error_message[ti]; ti++)
			_putchar(error_message[ti]);

		return 98;
	}

	init(a, ln - 1);

	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);

		if (t == NULL)
		{
			for (ti = 0; error_message[ti]; ti++)
				_putchar(error_message[ti]);

			free(a);
			return 98;
		}
	}

	_print(a, ln - 1);
	return 0;
}
