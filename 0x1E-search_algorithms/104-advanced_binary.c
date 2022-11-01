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
 * recursive_binary - recursive binary function to find an the
 *			the first ocurrence of a value
 * @array: array to search
 * @low: first index
 * @high: low index
 * @value: search value
 *
 * Return: nothing
 */
int recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high  - low) / 2;
		if (array[mid] == value && (mid == low || array[mid - 1] != value))
			return (mid);
		if (array[mid] >=  value)
			high = mid;
		if (array[mid] < value)
			low = mid + 1;

		return (recursive_binary(array, low, high, value));
	}
	return (-1);
}

/**
 * advanced_binary - advanced binary function to seek leftmost index
 * @array: aray to search
 * @size: length of the array
 * @value: search value
 *
 * Return: index of value if found, else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array)
		return (recursive_binary(array, 0, size - 1, value));
	return (-1);
}
