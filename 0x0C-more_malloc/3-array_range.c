#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that create an array of integers
 * @max:input
 * @min:input
 *
 * Return: Nothing.
 */
int *array_range(int min, int max) 
{
int *arr;
int size, i;
if (min > max) 
{
return NULL;
}   
size = max - min + 1;
arr = (int *)malloc(size * sizeof(int));
if (arr == NULL) 
{
return NULL;
}
for (i = 0; i < size; i++) 
{
arr[i] = min + i;
}
return (arr);
}
