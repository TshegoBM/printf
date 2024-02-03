#include "main.h"

#define BUFFER_SIZE 1024

/**
 * write_buffer - Write the content of a buffer to standard output.
 * @buffer: The butter containing the content to be written.
 * @size: The size of the content to be written.
 *
 * Return: Number of characters printed (string length).
 */

void write_buffer(const char *buffer, size_t size)
{
	write(1, buffer, size);
}
