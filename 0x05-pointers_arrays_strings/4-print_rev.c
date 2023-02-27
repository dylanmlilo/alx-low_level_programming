#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 *
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
