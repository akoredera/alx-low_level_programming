#include "main.h"
/**
 * print_number - print number
 * @n: variable
 * Return: nothing
 */
void print_number(int n)
{
	int i, o, p;

	if (n > 10 && n < 100)
	{
		for (i = 0; i < 1; i++)
			_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 0 && n <= -10)
	{
		for (i = 0; i < 1; i++)
		{
			n *= -1;
			_putchar('-');
			_putchar(n / 10 + '0');
		}
		_putchar(n % 10 + '0');
	}
	else if (n > 99 && n < 999)
	{
		o = n / 10;
		_putchar(o / 10 + '0');
		_putchar(o % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 999 && n < 9999)
	{
		o = n / 100;
		_putchar(o / 10 + '0');
		_putchar(o % 10 + '0');
		p = n % 100;
		_putchar(p / 10 + '0');
		_putchar(p % 10 + '0');
	}
	else if (n == 0)
		_putchar(n + '0');
}
