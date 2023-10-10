#include "main.h"

/**
 * _abs - return absolute integer
 * @n: The number to print;
 *
 * Return: positve integer
 */
int print_last_digit(int n)
{
	int g, h;
	if (n < 0)
	{
		h = -(-n);
		g = h % 10;
		_putchar('0' + g);
		return (0);
	}
	g = n % 10;
	_putchar('0' + g);
	return (0);
}
