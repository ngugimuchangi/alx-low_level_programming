#include "function_pointers.h"
/**
 * array_iterator - moves through array elements calling back to
 * other functions
 * @array: pointer to first element of array
 * @size: size of array
 * @action: pointer to callback functions
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size != 0)
		if (action)
			for (i = 0; i < size; i++)
				action(array[i]);
}
