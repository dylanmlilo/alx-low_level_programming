#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * It will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dest
 *
 * @dest: first string
 * @src: string to be added to dest
 * @n: the number of bytes to be used
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; )
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

