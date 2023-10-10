#include "main.h"

/**
 * _abs - return absolute integer
 * @n: The number to print;
 *
 * Return: positve integer
 */
int _abs(int n)
{
	int g = n;

	if (g < 0)
	{
		g = -(g);
		return (g);
	}
	return (g);
}
