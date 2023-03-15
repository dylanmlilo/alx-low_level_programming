#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number 
 * of coins to make change for an amount of money
 *
 * @argc: the number of arguments
 * @argv: array of arguments(argument vector
 *
 * Return: 0 (success) 1 (failure)
 */

int main(int argc, char *argv[])
{
	int i, change, cents;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	cents = 0;

	if (change < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < 5 && change >= 0; i++)
	{
		while (change >= coins[i])
		{
			cents++;
			change = change - coins[i];
		}
	}

	printf("%d\n", cents);
	return (0);
}
