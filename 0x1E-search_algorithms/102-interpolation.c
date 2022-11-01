#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation_search - search function using interpolation search algorith
 * @array: array to search
 * @size: lenght of array
 * @value: search value
 *
 * Return: index of item if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;
	if (array)
	{
		while (low <= high)
		{
			pos = low + (((double) (high - low) / (array[high] - array[low]))
					* (value - array[low]));
			if (pos < size)
				printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			else
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				return (-1);
			}
			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
