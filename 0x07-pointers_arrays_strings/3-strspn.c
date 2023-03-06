#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @accept: pointer to accept bytes from
 * @s: pointer to return the number of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, count;

	count = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[i] == accept[i])
			{
				count++;
				break;
			}
		}
		s++;
	}
	return (count);
}
