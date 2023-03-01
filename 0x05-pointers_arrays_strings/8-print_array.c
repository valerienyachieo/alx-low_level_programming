#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers.
 *
 * @a: function parameter
 * @n: function parameter
 *
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
