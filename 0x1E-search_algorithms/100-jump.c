#include "search_algos.h"
int high_value(size_t low, size_t high, int *array, size_t size, int value);
/**
 * jump_search - function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	int hv_output;
	size_t low = 0;
	size_t js_value = sqrt(size);
	size_t high = js_value;

	if (array == NULL)
		return (-1);
	while (low < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		hv_output = high_value(low, high, array, size, value);
		if (hv_output >= 0)
			return (hv_output);
		if (value >= array[low] && value <= array[high])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (; low <= high; low++)
			{
				printf("Value checked array[%ld] = [%d]\n", low, array[low]);
				if (value == array[low])
				{
					return (low);
				}
			}
		}
		else
		{
			low += js_value;
			high += js_value;
		}
	}
	return (-1);
}
/**
 * high_value - function check if high value is greater than size
 * @low: low paramater value
 * @high: high parameter value
 * @array: array of elements
 * @size: size of the array
 * @value: value to check
 * Return: the first index of the array otherwise -1
 */

int high_value(size_t low, size_t high, int *array, size_t size, int value)
{
	if (high > size)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", low, high);
		if (value == array[low])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, size - 1);
			return (low);
		}
		else
		{
			for (; low < size; low++)
			{
				printf("Value checked array[%ld] = [%d]\n", low, array[low]);
				if (value == array[low])
				{
					printf("Value found between indexes [%ld] and [%ld]\n", low, size - 1);
					return (low);
				}
			}
		}
	}
	return (-1);
}
