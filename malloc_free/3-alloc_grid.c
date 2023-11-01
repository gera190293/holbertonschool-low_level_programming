#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: variable 1
 *@height: variable 2
 *Return: result or NULL if variables was 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int h, w, i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[w][h] = 0;
		}
	}
	return (grid);
}
