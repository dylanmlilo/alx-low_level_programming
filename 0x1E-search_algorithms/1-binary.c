#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using binary search
 *
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the index of the value if found, -1 otherwise
*/

int binary_search(int *array, size_t size, int value)
{
	int left, right, middle, i;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		middle = left + (right - left) / 2;

		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
