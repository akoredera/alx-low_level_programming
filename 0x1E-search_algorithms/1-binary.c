#include "search_algos.h"
/**
 * binary_search -  function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value is located otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, num;
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (num = left; num <= right; num++)
		{
			if (num == right)
			{
				printf("%d\n", array[num]);
				break;
			}
			printf("%d, ", array[num]);
		}
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = (mid + 1);
		}
		else if (array[mid] > value)
		{
			right = (mid - 1);
		}
		else if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
