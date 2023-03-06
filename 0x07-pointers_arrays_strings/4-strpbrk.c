#include "main.h"
/**
 * _strpbrk - function locate first occurrence str s of any of bytes str accept
 * @s: string to be searched for set of bytes in str accept
 * @accept: set of bytes searched for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

