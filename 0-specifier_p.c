#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_p - Print a percent symbol.
 * @args: A pointer to a list of arguments (unused in this function).
 *
 * Return: Always returns 1.
 */

int print_p(va_list *args)
{
	char percent;

	percent = '%';

	write(1, &percent, 1);
}
