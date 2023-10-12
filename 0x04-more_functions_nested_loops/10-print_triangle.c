#include "main.h"

/**
 * print_triangle - print diagonal
 * @size: number of diagonal to print
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - 1; b > a; b--)
				_putchar(' ');
			for (c = 0; c <= a; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
