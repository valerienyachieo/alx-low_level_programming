#include <stdio.h>
/**
 * main - program that prints fibbanocci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	int x, y, z;

	x = 0;
	y = 1;
	z = 0;

	for (count = 0; count < 50; count++)
	{
		z = x + y;
		printf("%d", z);

		x = y;
		y = z;
	}
	return (0);
}

