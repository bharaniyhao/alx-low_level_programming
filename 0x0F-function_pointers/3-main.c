#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, otherwise 98 or 99 for errors
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char *operator;
    int (*func_ptr)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    operator = argv[2];

    func_ptr = get_op_func(operator);

    if (func_ptr == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    result = func_ptr(num1, num2);
    printf("%d\n", result);

    return (0);
}
