#include <stdio.h>
#include "main.h"

/**
 * _strcmp -function that compares two strings
 *
 * function should work exactly like strcmp
 *
 * @s1: first string
 * @s2: string to be compared to s1
 *
 * Return: (s1[i] - s2[i]) success or (0) failure
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

