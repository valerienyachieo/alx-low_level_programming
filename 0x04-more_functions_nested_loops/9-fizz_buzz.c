#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 3 != 5))
		{
			printf(" Fizz");
		}
		else if ((a % 5 == 0) && (a != 3))
		{
			printf(" Buzz");
		}
		else if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (a == 1)
		{
			printf("%d", a);
		}
		else
		{
			printf(" %d", a);
		}
	}
	printf("\n");

	return (0);
}

