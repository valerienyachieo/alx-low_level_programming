#include "main.h"
/**
 * _strchr - function that locates the first occurence of character in a string
 * @s: function parameter that is the string where char c is to be located
 * @c: function parameter that acts as the charater to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
