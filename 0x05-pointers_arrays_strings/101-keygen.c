#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 * You are allowed to use the standard library
 * You don’t have to pass the betty-style tests
 * (you still need to pass the betty-doc tests)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int password[100];
	int i, n;
	int sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sum = sum + (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum = sum +  n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

