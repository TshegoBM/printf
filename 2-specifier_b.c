#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_b - Converts an unsigned integer to binary and prints it
 * @arg: A va_list containing the argument to convert
 *
 * Return: The number of characters printed (excluding null byte)
 */

int print_b(va_list *arg)
{
	unsigned int decimal = va_arg(*arg, unsigned int);
	char binary[34];
	int length = 0;
	int middle;
	int count;
	char temp;
	int i;

	do {
		if (decimal % 2 == 0)
			binary[length] = '0';
		else
			binary[length] = '1';

		decimal /= 2;
		length++;
	}

	while (decimal != 0);
		binary[length] = '\0';
		middle = length / 2;


	for (i = 0; i < middle; i++)
	{
		temp = binary[i];
		binary[i] = binary[length - i - 1];
		binary[length - i - 1] = temp;
	}

	count = 0;
	for (i = 0; binary[i] != '\0'; i++)
	{
		write(1, &binary[i], 1);
		count++;
	}

	return (count);
}
