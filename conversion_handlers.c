/* file containing all functions to handle parsing */
#include "main.h"
/**
  * print_int - print integer given by arg to stdout
  * @arg: pointer to current va_list argument
  * Return: Number of characters printed
  */
int print_int(va_list *arg)
{
	int a = 1000000000, m = 0, count = 10, x = 0, n = 0;
	char *c;

	n = va_arg(*arg, double);
	if (n == 0)
		n = va_arg(*arg, int);
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

/**
 * print_uint - print unsigned integer given by arg to stdout
 * @arg: pointer to current va_list argument
 * Return: Number of characters printed
 */
int print_uint(va_list *arg)
{
	int m, count = 0;
	long unint, uncopy;
	char *str, dec[] = {"0123456789"};

	unint = uncopy = va_arg(*arg, long);

	str = alloc_base(unint, &count, 10);
	if (!str)
		exit(EXIT_FAILURE);

	m = count - 1;
	while (m >= 0)
	{
		str[m] = dec[uncopy % 10];
		uncopy /= 10;
		m--;
	}

	write(1, str, count);
	free(str);
	return (count);
}

/**
  * print_octal - convert and print unsigned int from base 10 to octal
  * @arg: pointer to given unsigned integer
  * Return: number of characters printed
  */
int print_octal(va_list *arg)
{
	int index, count = 0;
	long unint, temp;
	char *str, dec[] = {"01234567"};

	unint = temp = va_arg(*arg, long);

	str = alloc_base(unint, &count, 8);
	if (!str)
		exit(EXIT_FAILURE);

	index = count - 1;
	while (index >= 0)
	{
		str[index] = dec[temp % 8];
		temp /= 8;
		index--;
	}

	write(1, str, count);
	free(str);
	return (count);
}

/**
  * print_lowerhex - convert and print unsigned int from decimal to hexadecimal
  * @arg: pointer to given unsigned integer
  * Return: number of characters printed
  */
int print_lowerhex(va_list *arg)
{
	int index, count = 0;
	long unint, temp;
	char *str, dec[] = {"0123456789abcdef"};

	unint = temp = va_arg(*arg, long);

	str = alloc_base(unint, &count, 16);
	if (!str)
		exit(EXIT_FAILURE);

	index = count - 1;
	while (index >= 0)
	{
		str[index] = dec[temp % 16];
		temp /= 16;
		index--;
	}

	write(1, str, count);
	free(str);
	return (count);
}

/**
  * print_upperhex - convert and print unsigned int from decimal to hexadecimal
  * @arg: pointer to given unsigned integer
  * Return: number of characters printed
  */
int print_upperhex(va_list *arg)
{
	int index, count = 0;
	long unint, temp;
	char *str, dec[] = {"0123456789ABCDEF"};

	unint = temp = va_arg(*arg, long);

	str = alloc_base(unint, &count, 16);
	if (!str)
		exit(EXIT_FAILURE);

	index = count - 1;
	while (index >= 0)
	{
		str[index] = dec[temp % 16];
		temp /= 16;
		index--;
	}

	write(1, str, count);
	free(str);
	return (count);
}
