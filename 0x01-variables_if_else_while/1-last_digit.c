#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of the number stored in the variable n
 * main - check if the last digit is greater or less than 5 or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = (n % 10);
	if (num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, num);
	}
	else if (num < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
	return (0);
}
