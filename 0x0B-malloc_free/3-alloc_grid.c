#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates block memory for 2-D integer array
 * @width: array width
 * @height: array height
 * Return: pointer to the array on success, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
