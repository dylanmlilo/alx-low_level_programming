#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: string
 */
void puts2(char *str)
{
	int length = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	for (i = 0 ; i <= length - 1 ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

