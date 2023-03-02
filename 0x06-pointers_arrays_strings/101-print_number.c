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
	unsigned int k;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num  / 10 != 0)
	{
		print_number(num / 10);
	}

	k = num % 10;
	_putchar(k + '0');
}

