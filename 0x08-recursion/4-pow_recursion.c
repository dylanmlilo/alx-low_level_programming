#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y
 *
 * @x: The number raised to a power
 * @y: The power of a number
 *
 * Return: Power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
