#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
