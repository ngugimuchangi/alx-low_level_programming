#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - linear search function
 * @array: array to search for value
 * @size: array's size
 * @value: value to search for
 *
 * Return: index of value's first occurence in array if found
 *         NULL if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}

	return (-1);
}
