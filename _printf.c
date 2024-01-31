#include "main.h"
/**
  * _printf - format printing
  * @format: character string composed of zero or more directives
  *          with conversion specification that starts with '%'
  *          ending with conversion specifier
  * Return: number of characters printed excluding '\0'
  */
int _printf(const char *format, ...)
{
        int n = 0, count = 0;
        va_list args;

        va_start(args, format);
        while (format[n] != '\0')
        {
                if (format[n] == '%')
                {
                        if (spec_f(format[n + 1]) == NULL)
                        { /* no specifier after '%' continue normally */
                                write(1, (format + n), 1);
                                count++;
                                n++;
                        }
                        else
                        { /* call function to specifier */
                                count += (*spec_f(format[n + 1]))(&args);
                                n += 2; /* skip to character after specifier */
                        }
                        continue;
                }
                write(1, (format + n), 1);
                count++;
                n++;

        }
        va_end(args);
        return (count);
}
