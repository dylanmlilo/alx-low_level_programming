#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that print the binary equivalent of a decimal number
 *
 * @n: number to print in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i, value;
	unsigned long int binary_bit, decimal_number;

	decimal_number = n;
	value = 0;

	for (i = 63; i >= 0; i--)
	{
		binary_bit = decimal_number >> i;

		if (binary_bit & 1)
		{
			_putchar('1');
			value++;
		}
		else if (value)
		{
			_putchar('0');
		}
	}
	if (!value)
	{
		_putchar('0');
	}
}

