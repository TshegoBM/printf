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
	int i;

	str = va_arg(*args, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		count++;
	}

	return (count);
}
