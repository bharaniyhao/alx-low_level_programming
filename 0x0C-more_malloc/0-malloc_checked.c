#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -function that allocates memory
 * @b: number of bytes to allocates
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
free(ptr);
exit(98);
}
return (ptr);
}

