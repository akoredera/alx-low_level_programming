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
		else if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
		{
			printf("Name: %s", d->name);
			printf("\nAge: %f", d->age);
			printf("\nOwner: %s\n", d->owner);
		}
	}
}
