#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: NULL if str = NULL or memory available is insufficient
 * or a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *dupstr;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i]; i++)
		j++;
	dupstr = malloc(sizeof(char) * (i + 1));
	if (dupstr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dupstr[i] = str[i];
	dupstr[j] = '\0';
	return (dupstr);
}
