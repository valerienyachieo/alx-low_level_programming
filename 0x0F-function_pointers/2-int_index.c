#include "function_pointers.h"
/**
 * int_index - function that searches for integers
 * @size: nummber of lements in the array
 * @cmp: poniter to the function used to compare values
 * @array: th array to search through
 *
 * Return: -1 if no element matches or size <= 0
 * otherwise returns the index of the first element
 * for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
