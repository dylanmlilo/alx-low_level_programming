#include <stdio.h>
#include "main.h"

/**
 * set_bit - function that sets a bit at a given index to 1
 *
 * @n: pointer to the number to change
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n | (1UL << index);

	return (1);
}
