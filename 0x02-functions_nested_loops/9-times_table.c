#include "main.h"
/**
 * times_table - function that prints 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	k = i * j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar('\n');
		}
	}
}


