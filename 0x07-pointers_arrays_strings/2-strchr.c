#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: pointer to check array from
 * @c: the character to be checked
 *
 * Return: (s[c])success or (NULL) failure
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
			break;
		}
	}
	return (0);
}
