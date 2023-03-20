#include "dog.h"
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
/**
 * new_dog - function that creates a new structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if the function fails
 * otherwise returns pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *cpname;
	char *cpowner;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	cpname = _strdup(name);
	if (!cpname || cpname == NULL)
	{
		free(new);
		return (NULL);
	}
	cpowner = _strdup(owner);
	if (!cpowner || cpowner == NULL)
	{
		free(cpname);
		free(new);
		return (NULL);
	}
	new->name = cpname;
	new->age = age;
	new->owner = cpowner;

	return (new);
}


