#include <stddef.h>
/**
 * array_iterator - array iterator
 * @array: array
 * @size: array size
 * @action: function pointer
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
