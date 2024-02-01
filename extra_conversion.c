#include "main.h"
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
	while (n < m && m >= 1)
	{
		count[0]--;
		m /= 10;
	}
	if (n == 0)
		*count = 1;
	return (malloc(*count));
}

/**
  * alloc_base - allocate memory for converted unsigned int from base ten
  * @base: base required to converted to i.e. 8 for octal
  * @n: unsigned int value
  * @count: number to contain number of bytes (should be initialised to 0)
  * Return: pointer to allocated memory
  */
void *alloc_base(long n, int *count, int base)
{
	long m = n;

	while (m / base != 0 || m % base != 0)
	{
		*count += 1;
		m /= base;
	}
	if (n == 0)
		*count = 1;
	return (malloc(*count));
}
