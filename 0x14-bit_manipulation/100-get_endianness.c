#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function that checks if a machine is little or big endian
 *
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;

	char *ch = (char *) &n;

	return (*ch);
}
