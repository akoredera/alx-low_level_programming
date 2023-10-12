#include "ctype.h"

/**
 * _isupper - check for Capital letter
 * @c: character to check
 *
 * Return: 1 success otherwise 0
 * otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
