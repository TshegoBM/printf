#include "main.h"
/**
 * print_p - Print a percent symbol.
 * @args: A pointer to a list of arguments (unused in this function).
 *
 * Return: Always returns 1.
 */

int print_p(va_list * args __attribute__((unused)))
{
	char percent;

	percent = '%';

	return (write(1, &percent, 1));
}
