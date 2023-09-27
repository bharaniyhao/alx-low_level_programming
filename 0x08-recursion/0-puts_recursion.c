#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function like puts();
 * @s: input
 *
 * Description: Prints a string followed by a new line.
 * Return: void
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        putchar(*s);
        _puts_recursion(s + 1);
    }
    else
        putchar('\n');
}