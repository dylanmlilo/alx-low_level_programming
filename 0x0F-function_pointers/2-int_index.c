#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 *
 * @array: is the array to check
 * @size: is the size of elements in array
 * @cmp:  is a pointer to the function to be used to compare values
 *
 * Return: 0 (success0 -1 (failure)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

