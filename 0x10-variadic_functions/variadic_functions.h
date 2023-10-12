#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/*
 * int sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * @...: variable arguments
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...);

/*
 * void print_numbers - prints numbers followed by a separator
 * @separator: the string used to separate the numbers
 * @n: the number of parameters
 * @...: variable arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/*
 * void print_strings - prints strings followed by a separator
 * @separator: the string used to separate the strings
 * @n: the number of parameters
 * @...: variable arguments
 */
void print_strings(const char *separator, const unsigned int n, ...);

/*
 * void print_all - prints anything according to the specified format
 * @format: a list of types of arguments
 * @...: variable arguments
 */
void print_all(const char * const format, ...);

#endif
