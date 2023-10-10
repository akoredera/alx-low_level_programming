#include "main.h"

/**
 * print_last_digit  - return the last digit
 * @n: The number to print;
 *
 * Return: positve integer
 */
int print_last_digit(int n)
{
	int g;

	g = n % 10;

	if (n < 0)
	{
		g = g * -1;
	}
	_putchar(g + '0');
	return (g);
}
