#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at an index in a decimal number
 *
 * @n: number to search
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}

	value = (n >> index) & 1;

	return (value);
}
