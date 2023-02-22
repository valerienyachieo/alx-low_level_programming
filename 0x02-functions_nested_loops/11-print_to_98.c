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

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('i');
			if (i != 98)
				_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			_putchar('i');
			if (i != 98)
				_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar('i');
			if (i != 98)
				_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
