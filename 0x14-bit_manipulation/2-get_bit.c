#include "main.h"
/**
 * get_bit - function that gets value of a bit at a given index.
 * @n: the bit
 * @index: index of the given bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n >> index) & 1);
}

