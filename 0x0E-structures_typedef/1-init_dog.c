#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function that innitializes a variable
 * @d: name of the structure
 * @name: name to innitialize
 * @age: age to innitialize
 * @owner: owner to innitialize
 *
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
