#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2d array of int
 * previously created by malloc_grid function
 * @grid: input 2d array of int to free
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
