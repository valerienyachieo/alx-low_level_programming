#include <stdio>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int x = 612852475143;
	long int y;

	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
			x  = (x / y);
			y--;

