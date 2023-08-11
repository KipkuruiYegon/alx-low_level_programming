#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d int grid prev created by alloc_grid
 * @grid: pointer to array of integers
 * @height: number of the rows
 * Return: void, free up memory
 **/
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
		free(grid[y]);
	free(grid);
}
