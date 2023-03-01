#include "main.h"

/**
 * puts_half -  function that prints half of a string
 *
 * @str: function parameter
 *
 * Return: no return
 */
void puts_half(char *str)
{
	int i;
	int x;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	x = i / 2;
	if (i % 2 == 1)
	{
		x += 1;
	}
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
