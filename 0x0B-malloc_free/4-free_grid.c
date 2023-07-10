#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - It frees the 2d array
 * @grid:it is a 2d grid
 * @height: this shows the height dimension of grid
 * Description: it frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
