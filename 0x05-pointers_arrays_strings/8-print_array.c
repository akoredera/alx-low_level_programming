/**
 * print_array - print array
 * @a: array list
 * @n: array size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		printf("%d, ", a[i]);
	}
}
