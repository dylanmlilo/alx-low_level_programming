#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1
 * if value is not present in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int pos, diff;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		diff = array[high] - array[low];
		pos = low + (((double)(high - low) / (diff)) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}

	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
