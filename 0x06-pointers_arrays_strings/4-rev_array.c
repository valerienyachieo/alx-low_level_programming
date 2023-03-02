#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: function parameter that acts as the input
 * @n: the number of elements in the array
 *
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	j = n - 1;
	for (i = 0; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
