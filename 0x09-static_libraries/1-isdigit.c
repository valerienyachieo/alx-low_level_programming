#include "main.h"
/**
 * _isdigit - function that checks for a digit.
 * @c: function parameter
 *
 * Return: 1 if parameter is a digit
 * and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
