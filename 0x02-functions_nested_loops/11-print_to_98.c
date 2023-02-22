#include "main.h"
/**
 * print_to_98 - function that prints natural numbers to 98
 *
 * @n: function parameter
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (n >= 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('i');
		}
	}
	_putchar('\n');
}
