#include "search_algos.h"
/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index number otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);
	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (value == array[count])
			return (count);
	}
	return (-1);

}
