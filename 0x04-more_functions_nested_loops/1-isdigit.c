#include "ctype.h"

/**
 * _isdigit - check for digit
 * @c: integer to check
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
