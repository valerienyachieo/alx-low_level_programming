#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: no of arguments passed to the program
 * @av: array of argument pointers
 *
 * Return: NULL if ac == 0 or av == NULL or if concatination fails
 * otherwise Returns a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	k = 0;
	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}


