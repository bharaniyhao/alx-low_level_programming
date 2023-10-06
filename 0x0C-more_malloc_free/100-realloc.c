#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: memory to print
 * @old_size: the size of the memory to print
 * @new_size: size
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) 
{
void *new_ptr;
if (new_size == 0) 
{
free(ptr);
return NULL;
}
if (ptr == NULL) 
{
new_ptr = malloc(new_size);
return new_ptr;
}
new_ptr = malloc(new_size);
if (new_ptr == NULL) 
{
return NULL;
}
if (old_size < new_size) 
{
memcpy(new_ptr, ptr, old_size);
} else 
{
memcpy(new_ptr, ptr, new_size);
}
free(ptr);
return (new_ptr);
}
