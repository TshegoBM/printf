#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_s - Print a string.
 * @args: A pointer to a list of arguments.
 *
 * Return: Number of characters printed (string length).
 */

int print_s(va_list *args)
{
	char *str;

	str = va_arg(*args, char *);

	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		count++;
	}

	return (count);
}
