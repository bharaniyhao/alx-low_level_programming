#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the functio
 *
 */

void print_all(const char * const format, ...)
{
va_list args;
char *str_arg;
int int_arg;
double double_arg;
char char_arg;
int i = 0, j = 0;
va_start(args, format);
while (format && format[i])
{
j = 1;
switch (format[i])
{
case 'c':
char_arg = va_arg(args, int);
printf("%c", char_arg);
break;
case 'i':
int_arg = va_arg(args, int);
printf("%d", int_arg);
break;
case 'f':
double_arg = va_arg(args, double);
printf("%f", double_arg);
break;
case 's':
str_arg = va_arg(args, char *);
if (str_arg == NULL)
printf("(nil)");
else
printf("%s", str_arg);
break;
default:
j = 0;
break;
}
if (format[i + 1] && j)
printf("%s", ", ");
i++;
}
printf("\n");
va_end(args);
}
