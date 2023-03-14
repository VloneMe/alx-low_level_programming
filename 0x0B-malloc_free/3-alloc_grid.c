#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 *
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2D. array
 *
 */

int **alloc_grid(int width, int height)
{

	int **array;
	int n, m;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{

		array[n] = (int *) malloc(sizeof(int) * width);

		if (array[n] == NULL)
		{
			free(array);
			for (m = 0; m <= n; m++)
				free(array[m]);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			array[n][m] = 0;
		}
	}

	return (array);

}
