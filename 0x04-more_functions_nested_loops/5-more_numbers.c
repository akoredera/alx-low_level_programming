#include "main.h"

/**
 * print_most_numbers - print digit 0 - 9 without 2 and 4
 */
void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
		if (a >= 10)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		else
			_putchar(a + '0');
	}
	/*_putchar('\n');*/
}