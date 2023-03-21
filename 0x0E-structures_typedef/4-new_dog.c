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
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
		return (NULL);
	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j] = 0;
	return (ar);
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

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	cpname = _strdup(name);
	if (!cpname && name)
	{
		free(new);
		return (NULL);
	}
	cpowner = _strdup(owner);
	if (!cpowner && owner)
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


