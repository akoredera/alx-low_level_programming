#include "main.h"

/**
 * times_table - print out multiplication 0 to 9
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c >= 10 && c <= 90)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				if (b == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(c + '0');
				if (b == 9)
					break;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
