/**
 * cmp - compare if not zero
 * @a: integer
 * Return: a if it is integer, otherwise -1
 */
int cmp(int a)
{
	return (cmp(a));
}
/**
 * int_index - return index of array
 * @array: array
 * @size: array size
 * @cmp: function pointer for compare if not zero
 * Return: success (i) otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	if (cmp(array[i]))
		return (i);
	return (-1);
}
