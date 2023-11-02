#include "main.h"
#include "stdlib.h"
/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: max range
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr, size, i, j = 0;

	if (min > max)
		return (NULL);
	size = max - min;
	ptr  = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i < max; j++, i++)
	{
		ptr[j] = i;
	}
	return (ptr);
}
