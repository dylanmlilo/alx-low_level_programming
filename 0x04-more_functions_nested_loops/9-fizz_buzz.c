#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * program that prints the numbers from 1 to 100, followed by a new line
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Each number or word should be separated by a space
 * You are allowed to use the standard library
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
