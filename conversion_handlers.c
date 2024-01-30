/* file containing all functions to handle parsing */
#include "main.h"
/**
  * print_int - print integer given by arg to stdout
  * @arg: pointer to current va_list argument
  * Return: Number of characters printed
  */
int print_int(va_list *arg)
{
	int n, a = 1000000000, m = 0;
	int count = 10, x = 0;
	char *c;

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
  * alloc_int - allocate memory for integer string
  * @n: integer to allocate memory for
  * @count: pointer to maximum number of possible positive characters
  * Return: pointer to allocated memory. (success)
  *         NULL, malloc fails
  */
void *alloc_int(int n, int *count)
{
	int a = 1000000000;

	if (n < 0)
	{
		count[0]++;
		if (n % 10 == -8)
		{
			n++;
			n *= -1;
		}
	}
	while (n < a && a >= 1)
	{
		count[0]--;
		a /= 10;
	}
	if (n == 0)
		*count = 1;
	return (malloc(*count));
}
