#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order
 * as they are stored in the array
 * You are allowed to use printf
 *
 * @a: is the array name
 * @n: is the number of elements OF the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}

		else if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
		printf("\n");
}

