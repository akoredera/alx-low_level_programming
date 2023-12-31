#include "main.h"

/**
 * print_number - Prints an integer.
 * @a: The integer to be printed.
 */
void print_number(int a)
{
	unsigned int numb = a;

	if (a < 0)
	{
		_putchar('-');
		numb = -numb;
	}

	if ((numb / 10) > 0)
		print_number(numb / 10);

	_putchar((numb % 10) + '0');
}
