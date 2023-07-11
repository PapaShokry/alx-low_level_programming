#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: pointer to a pointer to a 2 dimensional array of integers
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
