#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - create a 2 dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Return: new 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **mygrid;
	int i;
	int j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	mygrid = malloc(sizeof(int *) * height);
	if (mygrid == NULL)
	{
		free(mygrid);
		mygrid = NULL;
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mygrid[i] = malloc(sizeof(int) * width);
		if (mygrid[i] == NULL)
		{
			free(mygrid[i]);
			mygrid[i] = NULL;
			free(mygrid);
			mygrid = NULL;
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mygrid[i][j] = 0;
	}
	if (mygrid == NULL)
	{
		free(mygrid);
		mygrid = NULL;
		return (NULL);
	}
	return (mygrid);
}
