#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - function that sums up integers
 * @a: interger to be used for summation
 * @b: integer to beused for summation
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that does subtraction between two integers
 * @a: integer to be used in subtraction
 * @b: integer to be used in subtraction
 *
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiplies two integers
 * @a: integer used for multiplication
 * @b: integer used fr multiplication
 *
 * Return: multiplication of integer a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides integers
 * @a:integer to be used for division
 * @b: integer to be used for division
 *
 * Return: division of integer a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod -  function that computes the remainder from a division
 * @a: integer used in the division to determine reminder
 * @b: integer used in the division to determine remainder
 *
 * Return: remainder form the division of two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
