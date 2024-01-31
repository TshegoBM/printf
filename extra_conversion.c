#include "main.h"
/**
  * value_errcheck - ensure argument is valid
  * @arg: pointer argument
  * @n: pointer to value
  * @c: specifier
  * Return: (0) success
  */
int value_errcheck(va_list *arg, int *n, char c)
{
	long i;

	switch (c)
	{
	case 'i':
		i = va_arg(*arg, double);
		if (i == 0)
		{
			i = va_arg(*arg, int);
			if (i > INT_MAX || i < INT_MIN)
			{
				errno = 22;
				perror("Error");
				exit(EXIT_FAILURE);
			}
		}
		break;
		}
	case 'b':
		{
		i = va_arg(*arg, long);
		if (i > UINT_MAX || i < 0)
		{
			errno = 22;
			perror("Error");
			exit(EXIT_FAILURE);
		}
		break;
		}
	default:
		break;
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
	int m = 1000000000;

	if (n < 0)
	{
		count[0]++;
		if (n % 10 == -8)
			n++;
		n *= -1;
	}
	while (n < m && a >= 1)
	{
		count[0]--;
		m /= 10;
	}
	if (n == 0)
		*count = 1;
	return (malloc(*count));
}
