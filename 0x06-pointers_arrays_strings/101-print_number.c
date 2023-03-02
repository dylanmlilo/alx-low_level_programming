#include <stdio.h>
#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 *
 * @num: integer numbers
 *
 * Return: nothing
 */

void print_number(int num)
{
	unsigned int k, num1;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	num1 = num;

	if (num1  / 10 != 0)
	{
		print_number(num1 / 10);
	}

	k = num1 % 10;
	_putchar(k + '0');
}

