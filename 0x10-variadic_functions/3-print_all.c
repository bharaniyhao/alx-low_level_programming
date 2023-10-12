#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    char *separator = "";
    unsigned int i = 0;
    char c;
    char *str;

    va_start(args, format);

    while (format && format[i])
    {
        c = format[i];
        switch (c)
        {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", separator, (float)va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s%s", separator, str);
                break;
            default:
                i++;
                continue;
        }
        separator = ", ";
        i++;
    }

    printf("\n");
    va_end(args);
}

