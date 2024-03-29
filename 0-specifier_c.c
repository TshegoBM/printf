#include "main.h"
/**
 * print_c - Print a character.
 * @args: A pointer to a list of arguments.
 *
 * Return: Number of characters printed.
 */

int print_c(va_list *args)
{
	char character;

	character = va_arg(*args, int);

	return (write(1, &character, 1));
}
