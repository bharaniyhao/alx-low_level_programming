#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - function that conatenates two strings
 * @s1 : input
 * @s2 : input
 * @n : string
 *
 * return : Always 0:
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) 
{
char *result;
unsigned int s1_len, s2_len;
if (s1 == NULL) 
{
s1 = "";
}
if (s2 == NULL) 
{
s2 = "";
}
s1_len = strlen(s1);
s2_len = strlen(s2);
if (n >= s2_len) 
{
n = s2_len;
}
result = malloc(s1_len + n + 1);
if (result == NULL) 
{
return NULL;
} 
strcpy(result, s1);
strncat(result, s2, n);
result[s1_len + n] = '\0';
return (result);
}
