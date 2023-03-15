#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1, otherwise 0 if two arguments not received
 */
int main(int argc, char *argv[])
{
	int i;
	int mult;

	mult = 1;
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}

