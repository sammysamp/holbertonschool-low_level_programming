#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - free memory of a 2 dimensional array
 * @grid: pointer to the array to free memory
 * @height: height of array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
