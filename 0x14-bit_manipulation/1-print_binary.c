#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: binary rep
 * Return: VOID
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		bin_check(n);
}

/**
 * bin_check - check the binary representation of a number
 * @n: binary rep
 * Return: VOID
 */
void bin_check(unsigned long int n)
{
	if (n == 0)
		return;
	bin_check(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
