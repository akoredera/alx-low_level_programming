#include "main.h"
/**
 * print_number - print number
 * @n: variable
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num1 = n;

	if (n < 0)
	{
		_putchar('-');
		num1 = -num1;
	}

	if ((num1 / 10) > 0)
	{
		print_number(num1 / 10);
	}
	_putchar(num1 % 10 + '0');
}
