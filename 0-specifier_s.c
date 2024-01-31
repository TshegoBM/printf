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
	int i;
	int count = 0;

	str = va_arg(*args, char *);
	if (!str) /* invalid string */
	{
		errno = 22;
		perror("Error");
		exit(EXIT_FAILURE);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		count++;
	}

	return (count);
}
