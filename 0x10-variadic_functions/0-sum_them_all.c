#include "variadic_functions.h"
#include <stdarg.h>
/*
 * sum_them_all -Returns the sum of tis aparamters.
 * @n: the number of paramters passed to the function
 * @...: variable number of paramters to calculate the sum of
 * 
 * Return:if n == 0 - 0.
 * otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0;
unsigned int i;
va_start(args, n);   
for (i = 0; i < n; i++) 
{
sum += va_arg(args, int);
}    
va_end(args);
return (sum);
}
