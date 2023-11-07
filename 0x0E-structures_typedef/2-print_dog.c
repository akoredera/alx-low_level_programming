#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog
 * @d: dog struct variable
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s", d->name);
		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("\nAge: %f", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("\nOwner: %s\n", d->owner);
	}
	else
		return;
}
