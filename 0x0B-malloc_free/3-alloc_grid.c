#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers
 * @width:  width of the two dimension array
 * @height: height to two dimension array
 *
 * Return: NULL on failure or if the height or with is less or equal to zero
 * otherwise returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **arr2dim;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr2dim = malloc(sizeof(int *) * height);
	if (arr2dim == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		arr2dim[h] = malloc(sizeof(int) * width);
		if (arr2dim[h] == NULL)
		{
			for (; h >= 0; h--)
				free(arr2dim[h]);

			free(arr2dim);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			arr2dim[h][w] = 0;
	}
	return (arr2dim);
}
