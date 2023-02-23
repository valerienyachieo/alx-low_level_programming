#include "main.h"
/**
 * _isupper - function that checks if a character is an upper alphabet.
 *@c: functional parameter
 *
 * Return: 1 if its an upper character
 * and 0 otherwise
 */
int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
