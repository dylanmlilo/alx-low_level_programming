#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: char
 *
 * Return: duplicate (success) NULL (failure)
 */

char *_strdup(char *str)

{
	char *duplicate;

	int i, len;

	len = 0;

	if (str == NULL)
	{
		return (NULL);

	}
	while (str[len] != '\0')
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));

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
