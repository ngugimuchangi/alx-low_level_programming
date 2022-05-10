#include "main.h"
#include "stdlib.h"
/**
 * _realloc - reallocates previously allocated memory
 * @ptr: void pointer for allocating memory
 * @old_size: old memory block
 * @new_size: new memory block
 * Return: ptr on success, NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (ptr != NULL && new_size == 0)
		return (NULL);
	if (new_size > old_size || new_size < old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
	}
	return (ptr);
}
