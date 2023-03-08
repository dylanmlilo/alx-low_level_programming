#include "main.h"

int iterator_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find its aquare root
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (iterator_sqrt_recursion(n, 0));
	}
}

/**
 * iterator_sqrt_recursion - iterates to find the natural
 * square root of a number
 *
 * @n: number to find its sqaure root
 * @i: iterator
 *
 * Return: Square root
 */

int iterator_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
	return (iterator_sqrt_recursion(n, i + 1));
	}
}

