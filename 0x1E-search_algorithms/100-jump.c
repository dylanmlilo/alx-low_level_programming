#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the index of the value if found, -1 otherwise
*/

int jump_search(int *array, size_t size, int value)
{
	int index, jump, previous, i;

	if (array == NULL || size == 0)
		return (-1);

	jump = (int)sqrt((double)size);
	i = 0;
	previous = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		i++;
		previous = index;
		index = i * jump;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", previous, index);

	for (; previous <= index && previous < (int)size; previous++)
	{
		printf("Value checked array[%d] = [%d]\n", previous, array[previous]);
		if (array[previous] == value)
			return (previous);
	}

	return (-1);
}
