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
	int i, name_len, owner_len = name_len = 0;

	for (i = 0; name[i] == '\0'; i++)
		name_len++;
	for (i = 0; owner[i] == '\0'; i++)
		owner_len++;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(name_len * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < name_len; i++)
		doggy->name[i] = name[i];
	doggy->age = age;
	doggy->owner = malloc(owner_len * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (i = 0; i < owner_len; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
