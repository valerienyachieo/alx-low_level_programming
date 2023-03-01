#include "main.h"
 /**
 * _strcpy - function that copies the string
 *
 * @dest: function parameter
 * @src: function parameter
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

