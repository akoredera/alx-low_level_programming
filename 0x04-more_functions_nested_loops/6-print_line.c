#include "main.h"

/**
 * print_line - write lines while input must be greater than zero
 * @n: number that determine lines
 */
void print_line(int n)
{
	int a;

	if (n >= 1)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}