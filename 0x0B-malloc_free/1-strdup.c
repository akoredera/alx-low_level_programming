#include "string.h"
#include "stdlib.h"
#include <stddef.h>
/**
 * _strdup - returns a pointer to a new string which duplicates
 * @str: string to duplicate
 * Return: NULL if size = 0; otherwise ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, size;

	if (str == NULL)
		return (NULL);
	size = strlen(str) + 1;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		if (i == size)
			ptr[i] = '\0';
		ptr[i] = str[i];
	}
	return (ptr);
}
