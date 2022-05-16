#include "function_pointers.h"
/**
 * int_index - searchers through an array of integers
 * @array: pointer to first element of array to check
 * @size: size of array
 * @cmp: pointer to callback comparison functions
 * Return: index to first match on success, -1 on failure or
 * no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array)
		if (cmp)
			for (i = 0; i < size; i++)
				if (cmp(array[i]) != 0)
					break;
	return (i);
}
