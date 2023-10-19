#include "main.h"
/**
 * reverse_array - reverse array
 * @a: array to reverse
 * @n: number of element to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int storeChar;

	for (j = n - 1, i = 0; i < j; i++, j--)
	{
		storeChar = a[i];
		a[i] = a[j];
		a[j] = storeChar;
}
}
