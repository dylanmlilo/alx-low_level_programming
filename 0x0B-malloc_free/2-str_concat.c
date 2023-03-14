#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 *
 * Return: s2 (success)
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int i, conc;

	i = 0, conc = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[conc] != '\0')
	{
		conc++;
	}
	concatenate = malloc(sizeof(char) * (i + conc + 1));
	if (concatenate == NULL)
	{
		return (NULL);
	}
	i = conc = 0;
	while (s1[i] != '\0')
	{
		concatenate[i] = s1[i];
		i++;
	}
	while (s2[conc] != '\0')
	{
		concatenate[i] = s2[conc];
		i++;
		conc++;
	}
	concatenate[i] = '\0';
	return (concatenate);
}

