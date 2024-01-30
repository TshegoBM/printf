#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
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

	write(1, &character, 1);

	return (1);
}
