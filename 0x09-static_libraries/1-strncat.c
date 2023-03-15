#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: function parameter that acts as the destination code
 * @src: function parameter that acts as the source code
 * @n: function parameter
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
