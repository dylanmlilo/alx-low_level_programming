#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * Return: Always 0.
 */

char *_strdup(char *str)

{

	char *duplicate;

	int i, length;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		length++;
		str++;
	}

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
