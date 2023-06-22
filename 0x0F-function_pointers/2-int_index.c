#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search in.
 * @size: The size of the array.
 * @cmp: A pointer to the function used to compare elements.
 *
 * Return: The index of the first element for which the comparison is true,
 *         or -1 if no such element is found or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
