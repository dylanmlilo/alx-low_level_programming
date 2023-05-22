#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: pointer to find the occurance of string needle
 * @needle: string to find
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}

