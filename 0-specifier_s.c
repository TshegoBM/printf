#include "main.h"
/**
 * print_s - Print a string.
 * @args: A pointer to a list of arguments.
 *
 * Return: Number of characters printed (string length).
 */

int print_s(va_list *args)
{
	char *str;
	int count = 0;

	str = va_arg(*args, char *);

	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}
