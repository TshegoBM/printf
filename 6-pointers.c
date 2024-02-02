#include "main.h"
#include <unistd.h>
#include <stdarg.h>


int print_pointer(va_list *arg)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == % && *(format + 1) == 'p')

			void *ptr = va_arg(args, void*);

		my_write("0x");
		my_write((char*)ptr);

		format +=2;
	}
	else
	{
		char buffer[2] = {*format, '\0'};
		my_write(buffer);
		format++;
	}
}
va_end(args)
	}

