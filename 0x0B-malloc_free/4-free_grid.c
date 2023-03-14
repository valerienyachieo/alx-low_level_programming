#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional array of integers
 * @grid: 2 dimension array to be freed
 * @height: height of the grid
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
