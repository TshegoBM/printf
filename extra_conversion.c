#include "main.h"
/**
  * value_errcheck - ensure argument is valid
  * @arg: pointer argument
  * @n: pointer to value
  * Return: (0) success
  */
int value_errcheck(va_list *arg, int *n)
{
	int i;

	i = va_arg(*arg, double);
	if (i == 0)
	{
		if (va_arg(*arg, long) > INT_MAX || va_arg(*arg, long) < INT_MIN)
		{
			errno = 22;
			perror("Error");
			exit(EXIT_FAILURE);
		}
		else
			i = va_arg(*arg, int);
	}
	*n = i;
	return (0);
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
			n++;
		n *= -1;
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
