#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{

	printf("%d\n", argc - 1);

	return (0);
}
