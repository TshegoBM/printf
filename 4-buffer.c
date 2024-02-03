#include "main.h"
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * print_s - Print a string.
 * @buffer: The butter containing the content to be written.
 * @size: The size of the content to be written.
 *
 * Return: Number of characters printed (string length).
 */

void write_buffer(const char *buffer, size_t size)
{
	write(1, buffer, size);
}

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
