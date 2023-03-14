#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of character
 * @size: the size of an array
 * @c: specific char to innitialize array
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
