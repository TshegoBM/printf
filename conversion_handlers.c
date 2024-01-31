/* file containing all functions to handle parsing */
#include "main.h"
/**
  * print_int - print integer given by arg to stdout
  * @arg: pointer to current va_list argument
  * Return: Number of characters printed
  */
int print_int(va_list *arg)
{
	int a = 1000000000, m = 0, count = 10, x = 0, n;
	char *c;

	value_errcheck(arg, &n);
	c = alloc_int(n, &count);
	if (c == NULL)
		exit(EXIT_FAILURE);
	if (n < 0)
	{
		c[m] = '-';
		if (n % 10 == -8)
		{
			n++;
			x++;
		}
		n *= -1;
		m++;
	}
	while (a >= 1)
	{
		if (n >= a)
		{
			if (a == 1) /* add x in case of INT_MIN */
				c[m] = '0' + ((n / a) % 10) + x;
			else
				c[m] = '0' + ((n / a) % 10);
			m++;
		}
		a /= 10;
	}
	if (n == 0)
		c[m] = '0';
	write(1, c, count);
	free(c);
	return (count);
}
