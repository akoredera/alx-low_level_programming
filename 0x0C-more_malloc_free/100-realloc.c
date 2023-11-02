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
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL && new_size > 0)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size < old_size)
	{
		new_size = old_size;
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	return (ptr);
}
