#include <stdio.h>
/**
 * main - function that prints fisrt 98 fibannoci numbers from 1
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
	for (count = 0; count < 98; count++)
	{
		printf("%lu, ", z);
		x = y;
		y = z;
		z = x + y;
		if (count != 97)
		{
			printf("%lu, ", z);
		}
		else
		{
			printf("%lu", z);
		}
	}
	printf("\n");

	return (0);
}
