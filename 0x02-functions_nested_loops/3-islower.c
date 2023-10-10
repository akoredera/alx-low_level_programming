#include <main.h>

/**
 * _islower - return 1 or 0
 * @c: The character to print;
 *
 * Return: On Success 1
 * Otherwise: 0 is returned
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
