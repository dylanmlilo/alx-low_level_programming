#include <stdio.h>
#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @sr: string array to encode
 *
 * Return: sr
 */

char *leet(char *sr)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; sr[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (sr[i] == s1[j])
			{
				sr[i] = s2[j];
			}
		}
	}
	return (sr);
}
