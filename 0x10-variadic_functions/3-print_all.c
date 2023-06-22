#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format provided.
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *str_arg;
int int_arg;
float float_arg;
char char_arg;
unsigned int i = 0, j = 0;
char *separator = "";
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
char_arg = va_arg(args, int);
printf("%s%c", separator, char_arg);
break;
case 'i':
int_arg = va_arg(args, int);
printf("%s%d", separator, int_arg);
break;
case 'f':
float_arg = va_arg(args, double);
printf("%s%f", separator, float_arg);
break;
case 's':
str_arg = va_arg(args, char *);
if (str_arg == NULL)
str_arg = "(nil)";
printf("%s%s", separator, str_arg);
break;
default:
j = 1;
break;
}
if (format[i + 1] && !j)
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
