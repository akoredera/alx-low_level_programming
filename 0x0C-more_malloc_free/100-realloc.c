#include "stdlib.h"
/**
 * _realloc -  reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space
 * @new_size: the new size, in bytes of the new memory block
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (a = 0; a < old_size && a < new_size; a++)
		new_ptr[a] = ((char *) ptr)[a];
	free(ptr);
	return (new_ptr);
}
