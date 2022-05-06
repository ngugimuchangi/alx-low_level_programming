#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free memory allocated to 2-D array
 * @grid: pointer to array
 * @height: height of array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
