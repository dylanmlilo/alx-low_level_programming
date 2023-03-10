#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * function should work exactly like strncpy
 *
 * @dest: first string
 * @src: string to be copied to dest
 *@n: the number of bytes to be used
 *
 * Return: (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

