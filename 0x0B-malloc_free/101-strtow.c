#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * count_words - function that splits a string into words
 * @str: input
 *
 *
 * Return: nothing
 */

int count_words(char *str) 
{
int i, count = 0, len = strlen(str);
for (i = 0; i < len; i++) 
{
if (!isspace(str[i])) 
{
count++;
while (!isspace(str[i]) && i < len) 
{
i++;
}
}
}
return count;
}
char **strtow(char *str) 
{
int i, j, k, len;
char **words;
int word_count = count_words(str);
if (str == NULL || *str == '\0') 
{
return NULL;
}
words = (char **) malloc((word_count + 1) * sizeof(char *));
if (words == NULL) 
{
return NULL;
}
k = 0;
for (i = 0; i < word_count; i++) 
{
while (isspace(str[k])) 
{
k++;
}
len = 0;
while (!isspace(str[k + len]) && str[k + len] != '\0') 
{
len++;
}
words[i] = (char *) malloc((len + 1) * sizeof(char));
if (words[i] == NULL) 
{
for (j = 0; j < i; j++) 
{
free(words[j]);
}
free(words);
return NULL;
}
for (j = 0; j < len; j++) 
{
words[i][j] = str[k + j];
}
words[i][len] = '\0';
k += len;
}
words[word_count] = NULL;
return (words);
}
