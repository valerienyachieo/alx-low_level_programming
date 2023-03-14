#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: destination parameter for conctination
 * @s2: source parameter for concatination
 *
 * Return: NULL on failure of concatination
 * otherwise pointer to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *concatstr;
	int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		j++;
	concatstr = malloc(sizeof(char) * j);
	if (concatstr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concatstr[k++] = s1[i];
	for (i = 0; s2[i]; i++)
		concatstr[k++] = s2[i];
	return (concatstr);
}
