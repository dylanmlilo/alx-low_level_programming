#include <stdio.h>
#include "main.h"

int palindrome(char *s, int i, int length);
int strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 *
 * @s: string to check
 *
 * Return: 1 if palindome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
	{
	return (palindrome(s, 0, strlen_recursion(s)));
	}
}

/**
 * strlen_recursion - function that returns the length of a string
 *
 * @s: string to find its length
 *
 * Return: length
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + strlen_recursion(s + 1));
	}
}

/**
 * palindrome - function that checks the characters
 * of a string recursively for palindrome
 *
 * @s: string to check
 * @i: iterator
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
	else if (i >= length)
	{
		return (1);
	}
	else
	{
	return (palindrome(s, i + 1, length - 1));
	}
}
