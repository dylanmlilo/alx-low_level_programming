#include <stdio.h>
#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: string to be capitalized
 *
 * Return: (str)
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		while (!(str[i] >= 97 && str[i] <= 122))

			i++;

		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		i == 0)
		str[i] = str[i] - 32;
		i++;
	}

	return (str);
}

