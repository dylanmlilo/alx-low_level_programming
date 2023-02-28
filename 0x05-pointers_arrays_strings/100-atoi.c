#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * The number in the string can be preceded
 * by an infinite number of characters
 * You need to take into account all the - and + signs before the no
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 *
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int length = 0;
	int k = 0;
	int num = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	while (i < length && k == 0)
	{
		if (s[i] == '-')
		{
			++j;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
			{
				num = -num;
			}
			n = n * 10 + num;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			k = 0;
		}
		i++;
	}
	if (k == 0)
	{
		return (0);
	}
	return (n);
}
