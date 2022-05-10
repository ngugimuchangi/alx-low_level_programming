#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array on integers.
 * @min: first element
 * @max: last element
 * Return: point to integer array on success,
 * NULL on failure.
 */
int *array_range(int min, int max)
{
	int i, *ptr, num;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, num = min; i < (max - min + 1); i++, num++)
		*(ptr + i) = num;
	return (ptr);
}
