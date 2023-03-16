#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: first value of array
 * @max: last value of array
 *
 * Return: NULL if min is greater than max or if function fails
 * otherwise returns pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	size = (max - min + 1);
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
