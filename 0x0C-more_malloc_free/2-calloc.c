#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: member of array
 * @size: memory size
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
