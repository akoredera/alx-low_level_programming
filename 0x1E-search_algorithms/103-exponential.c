#include "search_algos.h"
/**
 * exponential_search -  function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value is located otherwise -1
 */

int exponential_search(int *array, size_t size, int value)
{
	int count = 1;
	size_t mid, num;
	size_t left, right;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (count < (int)size && array[count] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
		count *= 2;
	}
	if (count >= (int)size)
		right = (int)size - 1;
	else
		right = count;
	left = count / 2;
	printf("Value found between indexes [%d] and [%d]\n", (int)left, (int)right);
	while (left < right)
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
			left = (mid + 1);
		else if (array[mid] > value)
			right = (mid - 1);
		else if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
