#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes absolute value of an interger
 *
 * @n: interger to be checked
 *
 * Return: always n.
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else
		n = n;
	return (n);
}
