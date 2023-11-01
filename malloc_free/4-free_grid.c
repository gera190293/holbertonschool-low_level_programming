#include "main.h"
#include <stdlib.h>
/**
 *free_grid - free alloc_grid function
 *@grid: grid of 2 dimension
 *@height: variable
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < heigth; i++)
		free(grid[i];
	free(grid);
}
