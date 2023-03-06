#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: pointer to check the first occurance of accept
 * @accept: string to check for its first occurance in s
 *
 * Return: 0 (success)
 */

char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i] != '\0'; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return (0);
}

