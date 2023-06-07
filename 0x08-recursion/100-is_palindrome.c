#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Compares two strings and returns 1 if they can be considered
 *                 identical, otherwise returns 0.
 * @s: The string to check for palindrome.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
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
