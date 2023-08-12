#include "main.h"

/**
* alloc_grid - returns a pointer to a 2D array
* @width: number of columns
* @height: number of rows
*
* Return: pointer to a 2D array if successful, else NULL
*/

int **alloc_grid(int width, int height)
{
	int **array2D;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	array2D = (int **)malloc(height * sizeof(int *));

	if (array2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array2D[i] = (int *)malloc(width * sizeof(int));
		if (array2D[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array2D[j]);
			free(array2D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < i; j++)
			array2D[i][j] = 0;
	}

	return (array2D);

}
