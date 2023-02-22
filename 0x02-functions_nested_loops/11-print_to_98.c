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
	for (n >= 0; n <= 98; n++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar('n');
	}
	_putchar('\n');
}
