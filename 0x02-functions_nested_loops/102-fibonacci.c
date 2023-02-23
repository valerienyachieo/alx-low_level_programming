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

	x = 1;
	y = 1;
	z = 1;

	for (count = 0; count < 50; count++)
	{
		if (count != 49)
		{
			printf("%lu, ", z);
			x = y;
			y = z;
			z = x + y;
		}
		else
		{
			printf("%lu", z);
		}
	}
	printf("\n");
	
	
	return (0);
}

