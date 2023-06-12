#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function the returns a pointer to a new string which is a duplicate of the string
 * @size : memory of string
 * Return : Always 0
 */
char* _strdup(char* str) 
{
size_t len;
char* new_str;
if (str == NULL) 
{
return NULL;
}
len = strlen(str) + 1;
new_str = (char*)malloc(len * sizeof(char));
if (new_str == NULL) 
{
return NULL;
}
memcpy(new_str, str, len);
return (new_str);
}
