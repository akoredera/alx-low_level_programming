#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: binary rep
 * Return: VOID
 */
void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = n | 1; i > 0; i = i / 2)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
	}
}
