#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of parameters
 * @...: A variable number of paramters to calculate the sum of
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i, sum;

	i = 0;
	sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
