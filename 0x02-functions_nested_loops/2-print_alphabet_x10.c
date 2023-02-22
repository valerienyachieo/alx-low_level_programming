#include "main.h"
/**
 * print_alphabet_x10 -function that prints 10x the alphabet in lower cases.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0; i <= 10 ; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
	_putchar('\n');
	}
}
