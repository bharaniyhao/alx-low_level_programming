#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0
 * @n: input
 * Return: 0
 */


int is_palindrome(char *s)
{
    int len = strlen(s);
    if (len <= 1) {
        return 1;
    } else if (s[0] != s[len - 1]) {
        return 0;
    } else {
        s[len - 1] = '\0';
        return is_palindrome(s + 1);
    }
}

