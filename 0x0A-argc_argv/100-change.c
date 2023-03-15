#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money
 * 
 * @argc: the number of arguments
 * @argv: array of arguments(argument vector
 *
 * Return: 0 (success) 1 (failure)
 */

int main(int argc, char *argv[])
{
	int change, cents;

	cents = 0;
	change = atoi(argv[1]);
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (change < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (change >= 25)
		{
			change = change - 25;
			cents++;
		}
		while (change >= 10)
		{
			change = change - 10;
			cents++;
		}
		while (change >= 10)
		{
			change = change - 10;
			cents++;
		}
		while (change >= 5)
		{
			change = change - 5;
			cents++;
		}
		while (change >= 2)
		{
			change = change - 2;
			cents++;
		}
		while (change >= 1)
		{
			change = change - 1;
			cents++;
		}
		printf("%d", cents);
	}
	return (0);
}
