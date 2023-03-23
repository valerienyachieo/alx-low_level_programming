#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the argument
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
