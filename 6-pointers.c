#include "main.h"
#include <stdarg.h>
/**
 * print_pointer - Pront pointers based on the provided format.
 * @args: A pointer to a va_list of arguments.
 *
 * Return: Number of characters printed.
 */

int print_pointer(va_list *arg)
{
	const char *format = va_arg(*arg, const char *);

	va_list args_duplicate;
	va_copy(args_duplicate, *arg);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == 'p')
		{
			void *ptr = va_arg(args_duplicate, void*);
			write(1, "0x", 2);

			char buffer[20];
			sprintf(buffer, "%p", ptr);
			write(1, buffer, strlen(buffer));

			format += 2;
		}
	else
	{
		char buffer[2] = {*format, '\0'};
		write(1, buffer, 1);
		format++;
	}
	}
	va_end(args_duplicate);
	return (0);
}
