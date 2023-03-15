#include "main.h"
/**
 * _isalpha - function that checks for alphabetic characters
 *
 * @c: chacter to be printed.
 *
 * Return: 1 if c is a letter either lowercase or upper case
 * and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
