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

/*void *alloc_binary(int n, int *count)*/
/*	while (!(n / 2 == 0 && n % 2 == 1))*/
/*		n /= 2;*/
/*		count[0]++;*/

/**
  * alloc_uint - allocate memory for given unsigned int
  * @n: unsigned int value
  * @count: number of maximum characters
  * Return: pointer to allocated memory
  */
void *alloc_uint(long n, int *count)
{
	long m = 1000000000;

	while (n < m && m >= 1)
	{
		count[0]--;
		m /= 10;
	}
	if (n == 0)
		*count = 1;
	return (malloc(*count));
}
