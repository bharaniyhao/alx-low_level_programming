#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments into a single string.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: On success, a pointer to the concatenated string. On failure, NULL.
 */
char *argstostr(int ac, char **av)
{
    int i, j, k;
    char *str;
    int len = 0;
    int total_len = 0;

    if (ac == 0 || av == NULL)
    {
        return NULL;
    }

    for (i = 0; i < ac; i++)
    {
        len = 0;
        while (av[i][len] != '\0')
        {
            len++;
        }
        total_len += len + 1;
    }

    str = (char *)malloc(total_len * sizeof(char));
    if (str == NULL)
    {
        return NULL;
    }

    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[k] = av[i][j];
            k++;
        }
        str[k] = '\n';
        k++;
    }

    str[k] = '\0';
    return str;
}
