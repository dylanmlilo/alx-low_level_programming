#include <stdio.h>
#include "main.h"

int recursive_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 if it is not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (recursive_prime(n, n - 1));
	}
}

/**
 * recursive_prime - calculates if a number is prime recursively
 *
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int recursive_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (recursive_prime(n, i - 1));
	}
}
