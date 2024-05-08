#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index number otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;
	size_t pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while ((array[low] < array[high]) && (array[low] <= value)
		       && (value <= array[high]))
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (pos > size)
			break;
		if (array[pos] > value)
		{
			high = pos - 1;
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		if (value == array[pos])
			return (pos);
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
