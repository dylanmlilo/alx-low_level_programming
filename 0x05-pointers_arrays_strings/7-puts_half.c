#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string, followed by a new line
 * The function should print the second half of the string
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: string to print
 */

void puts_half(char *str)
{
	int n;
	int i = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	n = (length / 2);

	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

