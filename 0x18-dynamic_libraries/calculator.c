#include "main.h"
#include <stdio.h>

/**
 * add - function that adds two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * return: sum
 */

int add(int a, int b)
{
	int sum = a + b;
	return (sum);
}

/**
 * sub - function that subtracts two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * return: ans
 */

int sub(int a, int b)
{
	int ans = a -b;
	return (ans);
}

/**
 * mul - function that multiplies two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * return: mult
 */

int mul(int a, int b)
{
	int mult = a * b;
	return (mult);
}

/**
 * div - function that divides two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * return: div
 */

int div(int a, int b)
{
	int div = a / b;
	return (div);
}

/**
 * mod - function that finds the modulus of two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * return: modulus
 */

int mod(int a, int b)
{
	int modulus = a % b;
	return (modulus);
}
