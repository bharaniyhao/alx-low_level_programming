#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_string - Prints strings, followed by a new line.
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 *
 * Description: separator is NULL, it is not printed.
 * if one of the strings is NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
