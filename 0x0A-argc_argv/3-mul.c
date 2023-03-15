#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int i;
	int mult;

	mult = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}

