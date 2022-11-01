#include <math.h>
#include <stdio.h>
# include "search_algos.h"

/**
 * jump_search - search algorithm using jump search
 * @array: array to search
 * @size: length of array
 * @value: search value
 *
 * Return: index of value if found, 1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, step, square_root;

	square_root = (size_t) sqrt(size);
	if (array)
	{
		start = step = 0;
		while (step < size && array[step] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", step, array[step]);
			start = step;
			step += square_root;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", start, step);
		while (start <= ((step < size - 1) ? step : size - 1))
		{
			printf("Value checked array[%lu] = [%d]\n", start, array[start]);
			if (array[start] == value)
				return (start);
			start++;
		}
	}
	return (-1);
}
