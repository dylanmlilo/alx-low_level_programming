#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: string that contains the binary digits to convert to decimal
 *
 * Return: decimal (success) NULL (failure)
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, length, len, base_10, base, power, num;

	base_10 = 0;
	base = 2;
	power = 1;
	num = 0;

	length = len = strlen(b);

	if (!b)
		return (0);

	for (i = 0; i < length; i++)
	{
		if (b[i] == 49)
			num = 1;
		else if (b[i] == 48)
			num = 0;
		else
		{
			return (0);
		}
		for (j = 1; j < len; j++)
		{
			power = power * base;
		}
		len--;
		base_10 = base_10 + (power * num);
		power = 1;
	}
	return (base_10);
}
