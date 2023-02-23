#include "main.h"
/**
 * print_diagonal - function that prints \ n times.
 * @n: function parameter
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				if (b == a)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
