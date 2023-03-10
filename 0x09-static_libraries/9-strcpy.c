#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: copy to dest from src
 * @src: copy from src to dest
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
