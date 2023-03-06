#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: pointer to the memory to be manipulated
 * @b: the constant byte to fill in the first n elements
 * @n: the number of bytes to be manipulated
 *
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


