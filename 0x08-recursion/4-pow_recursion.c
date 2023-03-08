#include "main.h"
/**
 * _pow_recursion - function that gives power of an interger
 * @x: input
 * @y: input
 *
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (power *= _pow_recursion(x, y - 1));
	}
}
