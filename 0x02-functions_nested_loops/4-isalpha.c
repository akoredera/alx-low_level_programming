#include "main.h"

/**
 * _isalpha - return 1 or 0
 * @c: The character to print;
 *
 * Return: On Success 1
 * Otherwise: 0 is returned
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}

	return (0);
}
