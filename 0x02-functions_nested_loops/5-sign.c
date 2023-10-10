#include "main.h"

/**
 * print_sign - return 1 or 0 or -1 for positive or zero
 * or negative value respectively
 * @n: The number to print;
 *
 * Return: On positve 1
 * Otherwise: 0 on zero
 * lastly: -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (-1);
}
