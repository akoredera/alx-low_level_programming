#include "main.h"
#include "stdlib.h"
/**
 * free_grid -  free a 2D grid
 * @grid: 2D array
 * @height: integer
 * Return: null
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
