#include <stdio.h>
/**
 * main - program that prints fibbanocci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long int x, y, z;

	x = 0;
	y = 1;
	z = 0;

	for (count = 1; count <= 50; count++)
	{
		printf("%lu, ", z);

		x = y;
		y = z;
		z = x + y;
	}
	return (0);
}

