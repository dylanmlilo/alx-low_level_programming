#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 *
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 *
 * @sr: string array to be encoded
 *
 * Return: (sr)
 */

char *rot13(char *sr)
{
	int i, j;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; sr[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (sr[i] == s1[j])
			{
				sr[i] = s2[j];
				break;
			}
		}
	}
	return (sr);
}

