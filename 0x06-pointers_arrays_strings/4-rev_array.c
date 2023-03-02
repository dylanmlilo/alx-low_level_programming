#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int j, temp;

	temp = 0;

	for (j = 0; j < n / 2; j++)
	{
		temp = *(a + j);
		*(a + j) = a[n - j - 1];
		a[n - j - 1] = temp;
	}
}
