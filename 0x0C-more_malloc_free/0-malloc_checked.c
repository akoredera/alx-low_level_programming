#include <stdlib.h>
/**
 * malloc_checked - check malloc
 * @b: size
 * Return: ptr or exit
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
