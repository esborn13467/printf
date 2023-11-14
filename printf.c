#include "main.h"
#include <stdio.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%' && *(format + 1) != '\0')
        {
            /* Handle conversion specifiers */
            switch (*(format + 1))
            {
                case 'c':
                    /* Handle %c */
                    count += putchar(va_arg(args, int));
                    format++;
                    break;
                case 's':
                    /* Handle %s */
                    count += printf("%s", va_arg(args, char *));
                    format++;
                    break;
                case '%':
                    /* Handle %% */
                    count += putchar('%');
                    format++;
                    break;
                default:
                    /* Handle unknown specifiers */
                    count += putchar('%');
                    break;
            }
        }
        else
        {
            /* Print regular characters */
            count += putchar(*format);
        }

        format++;
    }

    va_end(args);

    return count;
}

