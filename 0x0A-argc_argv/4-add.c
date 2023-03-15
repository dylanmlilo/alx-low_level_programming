#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

int _atoi(char *s);
int check_num(char *str);

/**
 * main - program that adds positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments(argument vector)
 *
 * Return: Always 0 (Success) 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, sum, count;

	sum = 0;
	count = 1;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	if (check_num(argv[count]))
	{
		for (i = 1; i < argc; i++)
		{
			sum  += _atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * check_num - check if arguments are digits
 *
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
