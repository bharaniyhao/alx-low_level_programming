#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * 
 * Return: On success, a pointer to the concatenated string. On failure, NULL.
 */
char *str_concat(char *s1, char *s2)
{
    size_t len1, len2;
    char *result;

    if (s1 == NULL)
    {
        s1 = "";
    }

    if (s2 == NULL)
    {
        s2 = "";
    }

    len1 = strlen(s1);
    len2 = strlen(s2);

    result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL)
    {
        return NULL;
    }

    memcpy(result, s1, len1);
    memcpy(result + len1, s2, len2);
    result[len1 + len2] = '\0';

    return result;
}
