#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: destination parameter for concatination
 * @s2: source parameter for concatination
 * @n: maximum number of bytes needed for concatination
 *
 * Return: NULL if the funtion fails
 * otherwise returns  pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, len;

	len = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		concat[len++] =  s1[i];
	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];
	concat[len] = '\0';
	return (concat);
}
