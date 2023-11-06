#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory
 * @d: variable to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
