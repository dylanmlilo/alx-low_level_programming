#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints whether the the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* making use of the if else statements to check the number */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negetive\n", n);
	}
	return (0);
}
