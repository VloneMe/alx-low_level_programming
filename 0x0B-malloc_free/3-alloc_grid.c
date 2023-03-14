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
	int **array, n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	n = 0;
	for (; n < height; n++)
	{
		array[n] = (int *)malloc(sizeof(int) * width);
		if (array[n] == NULL)
			return (NULL);
	}

	m = 0;
	for (n = 0; n < height; n++)
		for (; m < width; m++)
			array[n][m] = 0;

	return (array);

}
