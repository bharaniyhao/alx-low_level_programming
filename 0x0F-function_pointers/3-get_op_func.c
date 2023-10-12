#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as an argument to the program
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
    int i;

    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    i = 0;
    while (ops[i].op != NULL)
    {
        if (strcmp(ops[i].op, s) == 0)
        {
            return (ops[i].f);
        }
        i++;
    }
    printf("Error\n");
    exit(99);
    return (NULL);
}
