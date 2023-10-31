#include "stdlib.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: column size
 * @height: row size
 * Return: NULL if ptr is NULL; otherwise ptr
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
