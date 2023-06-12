#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of char and initializes it with a specific char.
 *
 * @size: The size of the array.
 * @c: The character used to initialize each element of the array.
 * 
 * Return: On success, a pointer to the created array. On failure, NULL.
 */
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int i;

    if (size == 0)
        return NULL;

    str = (char *) malloc(size * sizeof(char));
    if (str == NULL)
        return NULL;

    for (i = 0; i < size; i++)
        str[i] = c;

    return str;
}
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of char, and initializes it with a specific char
 * @size: the size of the memory to print
 * @buffer: the address the memory to print
 * 
 * Return: 0
 */

char *create_array(unsigned int size, char c) {
char *str;
unsigned int i;
if (size == 0) {
return (0);
}
str = (char*) malloc(size * sizeof(char));
if (str == 0 || str == NULL) {
return (NULL);
}
for (i = 0; i < size; ) {
str[i] = c;
i++;
}
return (str);
}
