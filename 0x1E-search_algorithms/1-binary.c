#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - funciton to print elements in array / array section
 * @array: array to search for
 * @low: first index
 * @high: last index
 *
 * Returni: nothing
 */
void print_array(int *array, int low, int high)
{
	int i = low;

	printf("Searching in array: ");

	while (i <= high)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * binary_search - binary search entry point
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of first occurence of value if found,
 *	   -1, otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;

	low = 0;
	high = size - 1;

	if (array)
		while (low <= high)
		{
			print_array(array, low, high);
			mid = (low + high) / 2;
			if (array[mid] > value)
				high = mid - 1;
			else if (array[mid] < value)
				low = mid + 1;
			else
				return (mid);

		}
	return (-1);
}
