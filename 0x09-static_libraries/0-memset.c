#include "main.h"
/**
 * _memset - function used to fill memory with a constant byte
 * @s: function parameter representing pointer to memory to be filled
 * @b: function parameter representing the number of bytes to fill
 * @n: function parameter representing the constant byte
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
