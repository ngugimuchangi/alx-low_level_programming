#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - function to print array
 * @array: array to print
 * @start: first index
 * @end: last index
 *
 * Return: nothing
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		printf("%d", array[start]);
		if (start < end)
			printf(", ");
		start++;
	}
	printf("\n");
}

/**
 * bin_srch - binary search function
 * @array: array to search for element
 * @low: the lowest index of current array section
 * @high: the highest index of current array section
 * @value: value to check for
 *
 * Return: index of value if found else -1
 */
int bin_srch(int *array, size_t low, size_t high, int value)
{
	int mid;

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

/**
 * exponential_search - function to search for integer using exponential
 *			search algorithm
 * @array: array to search
 * @size: size of array
 * @value: search value
 *
 * Return: index of value if found else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, upper, lower;

	if (array)
	{
		if (array[i] == value)
			return (i);
		for (i = 1; i < size && array[i] < value; i *= 2)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		lower = i / 2;
		upper = (i < size - 1) ? i : size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n", lower, upper);
		return (bin_srch(array, lower, upper, value));
	}
	return (-1);
}
