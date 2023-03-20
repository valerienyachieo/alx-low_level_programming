#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure type describing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: file that defines a new type struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - new name for typedef struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);

#endif
