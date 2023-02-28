#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: function parameter
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
