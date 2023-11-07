#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = strdup(name);
	if (doggy->name == NULL)
		return (NULL);
	doggy->age = age;
	doggy->owner = strdup(owner);
	if (doggy->owner == NULL)
		return (NULL);
	return (doggy);
}
