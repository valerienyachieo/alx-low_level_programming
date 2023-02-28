#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: function parameter
 *
 * Return: no return
 */
void puts2(char *str)
{
	int long i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
