#include "main.h"
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

int print_s(va_list *args) 
{
	char *str = va_arg(*args, char *);

	char buffer[BUFFER_SIZE];
	size_t count = 0;

	while (*str != '\0')
	{
		buffer[count++] = *str;

		if (count == BUFFER_SIZE)
		{
			write_buffer(buffer, count);
			count = 0;
		}

		++str;
	}

	if (count > 0)
	{
		write_buffer(buffer, count);
	}

	return (count);
}
