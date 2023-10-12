#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Cannot divide by zero\n");
        exit(100);
    }
    return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Cannot divide by zero\n");
        exit(100);
    }
    return (a % b);
}
