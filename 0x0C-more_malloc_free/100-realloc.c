#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates previously allocated memory
 * @ptr: void pointer for allocating memory
 * @old_size: old memory block
 * @new_size: new memory block
 * Return: ptr on success, NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	unsigned int i, max = new_size;
	char *old_pointer = ptr;

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		return (pointer);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		pointer[i] = old_pointer[i];
	free(ptr);
	return (pointer);
}
