#include "main.h"

void print_to_98(int n)
{
	int a;
	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			_putchar(a + '0');
			if (a > 9 || a < -9) 
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)	
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			_putchar(a + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	_putchar('\n');

}
