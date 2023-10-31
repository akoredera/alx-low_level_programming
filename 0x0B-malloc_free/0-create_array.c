#include "stdlib.h"
#include <stddef.h>
/**
 * create_array - creates an array of chars, and initialize
 * @size: size of the array
 * @c: character
 * Return: NULL if size = 0; otherwise ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		if ((i + 1) == size)
			ptr[i] = '\0';
		ptr[i] = c;
	}
	return (ptr);
}
