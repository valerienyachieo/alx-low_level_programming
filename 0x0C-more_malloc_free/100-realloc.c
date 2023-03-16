#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates memory
 * @ptr: pointer to previous memory allocated
 * @old_size: size in bytes for allocated memory of ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: ptr if new_size == old size
 * returns NULL if new_size == 0 & ptr != NULL
 * otherwise returns pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_1;
	char *ar;
	unsigned int i;

	ptr_1 = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ar = malloc(new_size);
		return (ar);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ar = malloc(new_size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		ar[i] = ptr_1[i];
	free(ptr_1);
	return (ar);
}


