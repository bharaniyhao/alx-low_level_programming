#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenat two strings
 * @s1: input
 * @s2: input
 * @n : number os size 
 * Return: nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size) 
{
void *result;
if (nmemb == 0 || size == 0)
{
return NULL;
}
result = malloc(nmemb * size);
if (result == NULL) 
{
return NULL;
}
memset(result, 0, nmemb * size);
return (result);
}
