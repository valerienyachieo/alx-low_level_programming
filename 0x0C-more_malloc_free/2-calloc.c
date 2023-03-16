#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of element
 * @size: size of the element
 *
 * Return: NULL if nmemb or size is zero or function failed
 * otherwise returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		arr[i] = 0;

	return (arr);
}
