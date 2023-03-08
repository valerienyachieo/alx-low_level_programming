#include "main.h"
/**
 * _strlen_recursion - function that retrns length of string.
 * @s: string whose length is to be determined
 *
 * Return: Length of string s
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
